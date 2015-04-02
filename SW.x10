import x10.io.Console;
import x10.io.File;
import x10.util.HashMap;
import x10.regionarray.*;

public class SW {
  public static def main(args:Rail[String]) {

    val alphabet_to_index = new HashMap[Char, Int]();
    val f_name="BLOSUM62";
    val file=new File(f_name);
    if(file.exists()) {
        val reader = file.openRead();

        // Read the first line
        var first_line:String = new String();
        for(s in reader.lines()){
          first_line = s;
          break;
        }

        for (var n:Int = 3 as Int; n <= first_line.length(); n = n + (3 as Int)) {
          alphabet_to_index.put(first_line.charAt(n), n/(3 as Int));
        }
        Console.OUT.println(alphabet_to_index.get('R'));
        reader.close();
    }
  }
}
