import java.util.*;
class zigzag {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in).useDelimiter("[,\\s+]");

    int rows = s.nextInt(); // To take number of rows as input

    int numbers = s.nextInt();// To take value of total numbers to be printed

    int[][] arr = new int[rows][numbers]; //making a 2D array of rows and numbers 
    int k = 0;
    boolean flag = true;
    
    for (int i = 1; i <= numbers; i++) {
      arr[k][i - 1] = i;
      if (k == 0) {
        flag = false;
      }
      if (k == (rows - 1)) {
        flag = true;
      }
      if (flag)
        --k;
      else
        ++k;
    }

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < numbers; j++) {
        if (arr[i][j] != 0)
          System.out.print(arr[i][j]);
        else
          System.out.print(" ");
      }
      System.out.println();
    }
  }
} 
