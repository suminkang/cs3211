import x10.io.Console;
import x10.io.File;
import x10.util.HashMap;
import x10.array.*;

public class SW {
  public static def main(args:Rail[String]) {

    val alphabet_to_index = new HashMap[Char, Int]();
    val f_name="BLOSUM62";
    val file=new File(f_name);
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
