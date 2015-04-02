import x10.io.Console;
import x10.io.File;
import x10.util.HashMap;
import x10.array.*;

public class SW {
  public static def readSeq(fileName:String):String {
    val file = new File(fileName);
    if(file.exists()) {
      val reader = file.openRead();
      var lineNum:Int = 0 as Int;
      var seq:String = new String();
      seq = "-";

      for(line in reader.lines()){
        //Skip the first line
        if(lineNum != 0 as Int) {
          seq = seq + line;
        }
        lineNum = lineNum + (1 as Int);
      }
      return seq;
    } else {
      return "";
    }
  }

  public static def printMatrix(seq1:String, seq2:String, len1:Long, len2:Long, matrix:Array_2[Long]) {
    // Print out the matrix.
    Console.OUT.println("  " + seq1);
    for (row in 0..len2) {
      var rowStr:String = new String();
      rowStr = seq2.charAt(row as Int).toString() + " ";
      for (col in 0..len1) {
        rowStr = rowStr + matrix(col,0);
      }
      Console.OUT.println(rowStr);
    }
  }

  public static def main(args:Rail[String]) {
    // ./sw s1.1 s2.1 BLOSUM62 10 5
    if (args.size < 5) {
      Console.OUT.println("Usage: not enough arguments");
      return;
    }

    val seqFile1 = args(0);
    val seqFile2 = args(1);
    val matchFile = args(2);
    val opening = args(3);
    val extension = args(4);

    var seq1:String = readSeq(seqFile1);
    var seq2:String = readSeq(seqFile2);
    val len1 = seq1.length() - 1;
    val len2 = seq2.length() - 1;
    //Console.OUT.println(seq1);
    //Console.OUT.println(seq2);

    // Create a matrix of length m+1 x n+1 initialized to 0s.
    val matrix = new Array_2[Long](len1+1,len2+1);
    // printMatrix(seq1, seq2, len1, len2, matrix);

    val alphabet_to_index = new HashMap[Char, Int]();
    val file=new File(matchFile);
    if(file.exists()) {
        val reader = file.openRead();

        // Example fill
        // sim_score_matrix.fill(5 as Int);

        var sim_score_matrix:Array_2[Int] = new Array_2[Int](1 as Int,1 as Int);
        var first_line:String = new String();
        var lineNum:Int = 0 as Int;
        for(s in reader.lines()){
          // For the first line, create hashmap where keys are letters and values are their indeces.
          if(lineNum == 0 as Int) {
            first_line = s;
            sim_score_matrix = new Array_2[Int](first_line.length() / (3 as Int), first_line.length() / (3 as Int));
            for (var n:Int = 3 as Int; n <= first_line.length(); n = n + (3 as Int)) {
              alphabet_to_index.put(first_line.charAt(n), n/(3 as Int));
            }

            // Example get on HashMap
            // Console.OUT.println(alphabet_to_index.get('K'));
            lineNum = lineNum + (1 as Int);
            continue;
          }

          // For the rest of the lines, split by spaces, ignore the first character and add the rest to the matrix.
          val split_line = s.split(" ");
          for (var n:Int = 1 as Int; n <= split_line.size; n = n + (1 as Int)) {
            try {
              sim_score_matrix(lineNum - 1, n-1) = Int.parse(split_line(n), 10 as Int);
            }
            catch (e:x10.lang.Exception) {
              continue;
            }
          }
          lineNum = lineNum + (1 as Int);
        }

        // Example print array
        // Console.OUT.println(sim_score_matrix.toString());

        reader.close();
    }
  }
}
