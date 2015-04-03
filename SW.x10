import x10.io.Console;
import x10.io.File;
import x10.util.HashMap;
import x10.array.*;

public class SW {
  public static def readSeq(fileName:String):String {
    val file = new File(fileName);
    var seq:String = new String();

    if(file.exists()) {
      val reader = file.openRead();
      var lineNum:Int = 0 as Int;
      seq = "-";

      reader.readLine(); //Skip the first line
      for(line in reader.lines()){
        seq = seq + line;
        lineNum = lineNum + (1 as Int);
      }
      reader.close();
    }
    return seq;
  }

  public static def printMatrix(seq1:String, seq2:String, len1:Long, len2:Long, matrix:Array_2[Int]) {
    // Print out the matrix.
    Console.OUT.println("  " + seq1);
    for (row in 0..len2) {
      var rowStr:String = new String();
      rowStr = seq2.charAt(row as Int).toString() + " ";
      for (col in 0..len1) {
        rowStr = rowStr + " " + matrix(col,row);
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
    val opening = Int.parse(args(3), 10 as Int);
    val extension = Int.parse(args(4), 10 as Int);

    var seq1:String = readSeq(seqFile1);
    var seq2:String = readSeq(seqFile2);
    val len1 = seq1.length() - 1;
    val len2 = seq2.length() - 1;
    // Console.OUT.println("seq1: " + seq1);
    // Console.OUT.println("seq2: " + seq2);

    // Create a matrix of length m+1 x n+1 initialized to 0s.
    var matrix:Array_2[Int] = new Array_2[Int](len1+1,len2+1);
    // printMatrix(seq1, seq2, len1, len2, matrix);

    val alphabet_to_index = new HashMap[Char, Int]();
    val file=new File(matchFile);
    if(file.exists()) {
      val reader = file.openRead();

      // Read in just the first line
      var first_line:String = reader.readLine().trim();
      val elements = first_line.split("  ");
      val size:Long = elements.size;

      for (i in 0..(size-1)) {
        // Console.OUT.println(i + ": " + elements(i));
        alphabet_to_index.put(elements(i).charAt(0 as Int), i as Int);
      }
      // Example get on HashMap
      //Console.OUT.println(alphabet_to_index.containsKey('O'));
      //Console.OUT.println(alphabet_to_index.get('O'));
      //Console.OUT.println(alphabet_to_index.get('X'));

      // Create a 2D matrix of the size of the characters.
      // Example fill: sim_score_matrix.fill(5 as Int);
      var sim_score_matrix:Array_2[Int] = new Array_2[Int](size as Int,size as Int);

      // For the rest of the lines, split by spaces,
      // ignore the first character and add the rest to the matrix.
      var lineNum:Long = 0;
      for(s in reader.lines()) {
        val split_line = s.split(" ");
        val s_size:Long = split_line.size;
        var colNum:Long = 0;

        for (i in 0..(s_size-1)) {
          try {
            sim_score_matrix(lineNum, colNum) = Int.parse(split_line(i), 10 as Int);
            // Console.OUT.println("(" + lineNum + "," + colNum + "): " + split_line(i));
            colNum++;
          }
          catch (e:x10.lang.Exception) {
            continue;
          }
        }
        lineNum++;
      }
      reader.close();

      // Console.OUT.println(sim_score_matrix.toString());
      buildMatrix(seq1, seq2, matrix, len1 as Int, len2 as Int, alphabet_to_index, sim_score_matrix, opening, extension);
      printMatrix(seq1, seq2, len1, len2, matrix);

      //backtrack(seq1, seq2, len1, len2, matrix);
    }
  }

  public static def affineGap(open:Int, extend:Int, length:Int):Int {
    return open + (length * extend);
  }

  public static def getCharacterIndex(c:Char, alphabet_to_index:HashMap[Char, Int]):Long {
    if (alphabet_to_index.containsKey(c)) {
      return alphabet_to_index.get(c);
    }
    return alphabet_to_index.get('*');
  }

  public static def buildMatrix(seq1:String, seq2:String, matrix:Array_2[Int], width:Int, height:Int, alphabet_to_index:HashMap[Char, Int], sim_score_matrix:Array_2[Int], open:Int, extend:Int) {
    var max:Int = 0 as Int;
    var gap:Int = 0 as Int;
    for (y in 1..height) {
      for (x in 1..width) {
        max = 0 as Int;

        // Top Left
        val xCharacterIndex = getCharacterIndex(seq1.charAt(x as Int), alphabet_to_index);
        val yCharacterIndex = getCharacterIndex(seq2.charAt(y as Int), alphabet_to_index);
        //Console.OUT.println("(" + seq1.charAt(x as Int) + "," + seq2.charAt(y as Int) + "): (" + xCharacterIndex + "," + yCharacterIndex + ")");

        val topLeft:Int = matrix(x-1, y-1) + sim_score_matrix(xCharacterIndex, yCharacterIndex);
        //Console.OUT.println("topLeft: " + topLeft);
        if(max < topLeft)
          max = topLeft;

        // Left
        val left:Int = matrix(x-1, y) - affineGap(open, extend, gap);
        //Console.OUT.println("left " + left);
        if(max < left)
          max = left;

        // Top
        val top:Int = matrix(x, y-1) - affineGap(open, extend, gap);
        //Console.OUT.println("top " + top);
        if(max < top)
          max = top;

        matrix(x,y) = max;

        if(seq1.charAt(x as Int).equals(seq2.charAt(y as Int)))
          gap = 0 as Int;
        else
          gap = gap + (1 as Int);
      }
    }
  }

  public static def backtrack(seq1:String, seq2:String, len1:Long, len2:Long, matrix:Array_2[Long]) {
    // Backtracking algorithm
    // you have matrix that has values
    // go from matrix(len1, len2) backwards
    // look at values (i-1, j), (i, j-1), (i-1, j-1) and take the max
    var i:Long = len1;
    var j:Long = len2;
    var stack:Rail[Long] = new Rail[Long]();
    var stackIndex:Long = 0;

    while (i != 0 && j != 0) {
      var diag:Long = matrix(i-1,j-1);
      var left:Long = matrix(i-1,j);
      var up:Long = matrix(i,j-1);

      if (diag >= left && diag >= up) {
        // align
        i--;
        j--;
        stack(stackIndex) = 1;
      } else if (left > diag && left >= up) {
        // insert - in sequence 2
        i--;
        stack(stackIndex) = 2;
      } else if (up > diag && up > left) {
        // delete (insert - in sequence 1)
        j--;
        stack(stackIndex) = 3;
      }
      stackIndex++;
    }

    /*
    Console.OUT.println("stackIndex: " + stackIndex);
    var align1:String = new String();
    var align2:String = new String();
    */
  }
}
