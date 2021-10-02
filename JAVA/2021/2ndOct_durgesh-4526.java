// import java.util.*;
import java.util.Scanner;
class first {
  public static void main(String[] args) {
    Scanner scs = new Scanner(System.in);
    System.out.print("Enter rows no: ");
    int rows = scs.nextInt();
    System.out.print("Enter columnsumn no: ");
    int columns = scs.nextInt();

    int[][] arr = new int[rows][columns];
    int k = 0;
    boolean varient = true;
    for (int j = 1; j <= columns; j++) {
      arr[k][j - 1] = j;
      if (k == 0) {
        varient = false;
      }
      if (k == (rows - 1)) {
        varient = true;
      }
      if (varient)
        --k;
      else
        ++k;
    }

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
        if (arr[i][j] != 0)
          System.out.print(arr[i][j]);
        else
         System.out.print("  ");
      }
      System.out.println();
    }
  }
} 
