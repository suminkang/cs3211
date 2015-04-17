import x10.io.Console;
import x10.io.File;
import x10.util.HashMap;
import x10.array.*;
import x10.util.Stack;
import x10.util.Pair;
import x10.util.ArrayList;

public class SW_par {


  public static def main(args:Rail[String]) {
    // ./sw s1.1 s2.1 BLOSUM62 10 5
    if (args.size < 5) {
      Console.ERR.println("Usage: not enough arguments");
      return;
    }

    // Read in the arguments.
    val seqFile1 = args(0);
    val seqFile2 = args(1);
    val matchFile = args(2);
    val opening = Int.parse(args(3), 10 as Int);
    val extension = Int.parse(args(4), 10 as Int);

    var seq1:String = readSeq(seqFile1);
    var seq2:String = readSeq(seqFile2);
    val len1 = seq1.length() - 1;
    val len2 = seq2.length() - 1;

    // Check that the sequences were read in correctly.
    if (len1 < 0 || len2 < 0) {
      Console.ERR.println("Usage: file does not exist. Please check the input files.");
      return;
    }

    // Create a matrix of length m+1 x n+1, all initialized to 0s.
    // This is the matrix that contains the final score and will be used for alignment.
    var matrix:Array_2[Int] = new Array_2[Int](len1+1,len2+1);

    // The alphabet_to_index hashmap will return the index of the character in
    // the similarity score matrix.
    val alphabet_to_index = new HashMap[Char, Int]();
    val file=new File(matchFile);
    if(file.exists()) {
      val reader = file.openRead();

      // Read in the first line to get the size of the matrix.
      var first_line:String = reader.readLine().trim();
      val elements = first_line.split("  ");
      val size:Long = elements.size;

      for (i in 0..(size-1)) {
        alphabet_to_index.put(elements(i).charAt(0 as Int), i as Int);
      }

      // Create a matrix to store the similarity score from the match file.
      var sim_score_matrix:Array_2[Int] = new Array_2[Int](size as Int,size as Int);
      var lineNum:Long = 0;

      for(s in reader.lines()) {
        val split_line = s.split(" ");
        val s_size:Long = split_line.size;
        var colNum:Long = 0;

        for (i in 0..(s_size-1)) {
          if(split_line(i).length() == 0 as Int)
            continue;

          try {
            sim_score_matrix(lineNum, colNum) = Int.parse(split_line(i), 10 as Int);
            colNum++;
          }
          catch (e:x10.lang.Exception) {
            continue;
          }
        }
        lineNum++;
      }
      reader.close();

      var maxScore:Int = buildMatrix(seq1, seq2, matrix, len1 as Int, len2 as Int, 
                            alphabet_to_index, sim_score_matrix, opening, extension);
      backtrack(seq1, seq2, len1, len2, matrix, maxScore);
    } else {
      Console.ERR.println("Usage: match file does not exist.");
      return;
    }
    return;
  }

   /**
   * Reads in the sequence from a file with fileName
   * Input files look like the following:
   *   >gi|2829193|gb|AF043946.1| ... ignore all this ...
   *   GCTTTCCCCTAAAAAGTACATTTGAAAGCGAGAATGGAGGAGGCGGACC
   *   ACACCTTCCATGACTTATGGAACAATGTTTTTTTGTCGACTGAGAATGA
   * The first line is ignored.
   */
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

  public static def affineGap(open:Int, extend:Int, length:Int):Int {
    return open + (length * extend);
  }

  /**
   * Get the index of the character c in the similarity score matrix using the hashmap.
   */
  public static def getCharacterIndex(c:Char, alphabet_to_index:HashMap[Char, Int]):Long {
    if (alphabet_to_index.containsKey(c)) {
      return alphabet_to_index.get(c);
    }
    return alphabet_to_index.get('*');
  }

  /**
   * Build the matrix by calculating the score using the Smith-Waterman algorithm.
   * MAX_THREADS and MIN_WORK_PER_THREAD are used to run the computation in parallel.
   */
  public static def buildMatrix(seq1:String, seq2:String, matrix:Array_2[Int], width:Int, height:Int, alphabet_to_index:HashMap[Char, Int], sim_score_matrix:Array_2[Int], open:Int, extend:Int):Int {
    val MAX_THREADS:Int = 4 as Int;
    val MIN_WORK_PER_THREAD:Int = 10 as Int;
    
    var mat_M:Array_2[Int] = new Array_2[Int](width+1,height+1);
    for (i in 1..width)
      mat_M(i, 0) = -1000000 as Int;
    for (j in 1..height)
      mat_M(0, j) = -1000000 as Int;

  	var mat_I:Array_2[Int] = new Array_2[Int](width+1,height+1);
  	mat_I(0,0) = -1000000 as Int;
  	for (j in 1..height) {
  		mat_I(0, j) = -1000000 as Int;
  		mat_I(1, j) = -open;
  	}
  	for (i in 1..width)
  		mat_I(i, 0) = -affineGap(open, extend, (i - 1) as Int);

  	var mat_J:Array_2[Int] = new Array_2[Int](width+1,height+1);
  	mat_J(0,0) = -1000000 as Int;
  	for (i in 1..width) {
  		mat_J(i, 0) = -1000000 as Int;
  		mat_J(i, 1) = -open;
  	}
  	for (j in 1..height)
  		mat_J(0, j) = -affineGap(open, extend, (j - 1) as Int);

    var max:Int = 0 as Int;
    var diagonals:Int = height + width - 1 as Int;
    var index:Int = 0 as Int;
    var amount:Int = 0 as Int;
    for (d in 0..(diagonals-1)) {
      var diag:ArrayList[Pair[Int, Int]] = generateDiagonal(d as Int, height, width);
      val num_potential_threads = diag.size() as Int / MIN_WORK_PER_THREAD;
      if(num_potential_threads < 2) { // Special case: no threads.
        computeDiagRange(seq1, seq2, alphabet_to_index, sim_score_matrix, open, extend, matrix, mat_M, mat_I, mat_J, diag, 0 as Int, diag.size() as Int);
      } else {
        if(num_potential_threads < MAX_THREADS) //Start potential amount of threads with minimum work each.
          amount = MIN_WORK_PER_THREAD;
        else //Start maximum number of threads with work divided evenly among them.
          amount = diag.size() as Int / MAX_THREADS;
          
          
        var z:Int = 0 as Int;
        var b:Int = ((diag.size() as Int) / amount);
        //finish while(index < b) {
        
        finish for(g in 0..(b-1)) {
          
          if (z == 0 as Int) {
            if(diag.size() - index < amount * (2 as Int)) { //If there's less than twice the normal amount of work left, have this thread pick it all up.
              async computeDiagRange(seq1, seq2, alphabet_to_index, sim_score_matrix, open, extend, matrix, mat_M, mat_I, mat_J, diag, (g*amount) as Int, (diag.size() as Int - g*amount) as Int);
              //break;
              z = 1 as Int;
            }
            else { //Normal case
              async computeDiagRange(seq1, seq2, alphabet_to_index, sim_score_matrix, open, extend, matrix, mat_M, mat_I, mat_J, diag, (g*amount) as Int, amount);
            }
            //async { index += amount; }
          }
        }

        
        
        
      }
      
    }
    return max;
  }

/**
   * Given the diagonal number, height, and width, return the list of pairs that represent
   * the indices of the elements in that specific diagonal.
   */
public static def generateDiagonal(diag:Int, height:Int, width:Int): ArrayList[Pair[Int, Int]] {
    var elements:ArrayList[Pair[Int, Int]] = new ArrayList[Pair[Int, Int]]();
    val numDiags:Int = height + width - (1 as Int);
    
    if(diag < Math.min(height, width)) {
      // Console.OUT.println("1");
      for (i in 0..diag)
        elements.add(new Pair[Int,Int]((diag - i) as Int, i as Int));
    } else if(diag >= Math.max(height, width)) {
      // Console.OUT.println("2");
      var min:Int = Math.min(height, width);
      for(i in 0..(numDiags - diag - 1))
        elements.add(new Pair[Int, Int]((height -1 - i) as Int, (i + diag + 1 - height) as Int));
    } else if(diag < height && diag >= width) {
      // Console.OUT.println("3");
      for (i in 0..(width - 1))
        elements.add(new Pair[Int,Int]((diag - i) as Int, i as Int));
    } else if(diag < width && diag >= height) {
      // Console.OUT.println("4");
      for(i in 0..(height - 1))
        elements.add(new Pair[Int, Int]((height - 1 - i) as Int, (i + diag + 1 - height) as Int));
    }
    return elements;
  }
  
   /**
   * Use the three matrices to compute the score at the current diagonal index.
   */
  public static def computeDiagRange(seq1:String, seq2:String, alphabet_to_index:HashMap[Char, Int], sim_score_matrix:Array_2[Int], open:Int, extend:Int,
                                    matrix:Array_2[Int], mat_M:Array_2[Int], mat_I:Array_2[Int], mat_J:Array_2[Int],
                                    diag:ArrayList[Pair[Int, Int]], start:Int, nelems:Int) {
    for (i in start..(start + nelems - 1 as Int)) {
    //async {
      val elem_p:Pair[Int, Int] = diag.get(i);
      val y:Int = elem_p.first + 1 as Int;
      val x:Int = elem_p.second + 1 as Int;
      //Console.OUT.println("(" + x + "," + y + ")");

      // Top Left
      val xCharacterIndex = getCharacterIndex(seq1.charAt(x as Int), alphabet_to_index);
      val yCharacterIndex = getCharacterIndex(seq2.charAt(y as Int), alphabet_to_index);
      val sim:Int = sim_score_matrix(xCharacterIndex, yCharacterIndex);
      //Console.OUT.println("Simi (" + seq1.charAt(x as Int) + "," + seq2.charAt(y as Int) + ") = " + sim);
      //Console.OUT.println("(" + seq1.charAt(x as Int) + "," + seq2.charAt(y as Int) + "     generateDiagonals(d, height, width);): (" + xCharacterIndex + "," + yCharacterIndex + ")");

      mat_M(x, y) = Math.max(Math.max(mat_M(x-1, y-1) + sim, mat_I(x-1, y-1) + sim), mat_J(x-1, y-1) + sim);
      mat_I(x, y) = Math.max(mat_M(x-1, y) - open, mat_I(x-1, y) - extend);
      mat_J(x, y) = Math.max(mat_M(x, y-1) - open, mat_J(x, y-1) - extend);

      matrix(x,y) = Math.max(Math.max(Math.max(mat_M(x,y), mat_I(x,y)), mat_J(x,y)), 0 as Int);
      /*if (max < matrix(x,y)) {
        max = matrix(x,y);
      }*/
    //}
    }
  }

  /**
   * Finds the sequence alignment by traversing through the matrix from the bottom right, 
   * following the maximal values.
   */
  public static def backtrack(seq1:String, seq2:String, len1:Long, len2:Long, matrix:Array_2[Int], maxScore:Int) {
    var i:Long = len1;
    var j:Long = len2;
    var actions:Stack[Long] = new Stack[Long]();

    while (i != 0 || j != 0) {
      if (i == 0) {
        j--;
        actions.push(1);
        continue;
      } else if (j == 0) {
        i--;
        actions.push(2);
        continue;
      }

      var diag:Int = matrix(i-1,j-1);
      var left:Int = matrix(i-1,j);
      var up:Int = matrix(i,j-1);

      if (diag >= left && diag >= up) {
        // align
        i--;
        j--;
        actions.push(0);
      } else if (up > diag && up > left) {
        // delete (insert - in sequence 1)
        j--;
        actions.push(1);
      } else if (left > diag && left >= up) {
        // insert - in sequence 2
        i--;
        actions.push(2);
      }
    }

    var align1:String = new String();
    var align2:String = new String();

    // Start at index 1 since '-' is the first character for both strings
    var s1Index:Int = 1 as Int;
    var s2Index:Int = 1 as Int;
    var numGaps:Long = 0;
    var numMatches:Long = 0;

    while(!actions.isEmpty()) {
      var action:Long = actions.pop();
      //Console.OUT.println("ACTION: " + action);
      if (action == 0) {
        // Check for matches
        var s1char:Char = seq1.charAt(s1Index);
        var s2char:Char = seq2.charAt(s2Index);

        if (s1char == s2char) {
          numMatches++;
        }

        align1 = align1 + s1char.toString();
        align2 = align2 + s2char.toString();
        s1Index++;
        s2Index++;
      } else if (action == 1) {
        align1 = align1 + "-";
        align2 = align2 + seq2.charAt(s2Index).toString();
        s2Index++;
        numGaps++;
      } else if (action == 2) {
        align1 = align1 + seq1.charAt(s1Index).toString();
        align2 = align2 + "-";
        s1Index++;
        numGaps++;
      }
    }

    var maxLen:Long = align1.length();
    var identity:Double = (numMatches/maxLen as Double) * 100;
    var gap:Double = (numGaps/maxLen as Double) * 100;

    Console.OUT.printf("Identity: %d/%d (%.2f%%)\n", numMatches, maxLen, identity);
    Console.OUT.printf("Gaps: %d/%d (%.2f%%)\n", numGaps, maxLen, gap);
    Console.OUT.println("Score: " + maxScore);
    Console.OUT.println("1: " + align1);
    Console.OUT.println("2: " + align2);
  }
}
