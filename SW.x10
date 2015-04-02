import x10.io.Console;
import x10.io.File;
import x10.regionarray.*;

public class SW {
  public static def main(args:Rail[String]) {
    val f_name="BLOSUM62";
    val file=new File(f_name);
    if(file.exists()) {
        val reader = file.openRead();
        for(s in reader.lines()){
          Console.OUT.println(s);
          break;
        }
        reader.close();
    }

    /*
    val a1 = new Array[float](2, 1);
    val a2 = new Array[float](2, 2);
    val b1 = new Array[float](2, 3);
    val b2 = new Array[float](2, 4);

    val c1 = new Array[float](2, 0);
    val c2 = new Array[float](2, 0);

   finish {
        async {
                c1(0) = a1(0)*b1(0) + a1(1)*b2(0);
        }
        async {
                c1(1) = a1(0)*b1(1) + a1(1)*b2(1);
        }
        async {
                c2(0) = a2(0)*b1(0) + a2(1)*b2(0);
        }
        async {
                c2(1) = a2(0)*b1(1) + a2(1)*b2(1);
        }
   }
    Console.OUT.println(c1(0));
    Console.OUT.println(c1(1));
    Console.OUT.println(c2(0));
    Console.OUT.println(c2(1));
   */
  }
}
