import java.util.*;

class Pattern {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter row no: ");
    int row = sc.nextInt();
    System.out.print("Enter column no: ");
    int col = sc.nextInt();

    int[][] arr = new int[row][col];
    int k = 0;
    boolean flag = true;
    for (int j = 1; j <= col; j++) {
      arr[k][j - 1] = j;
      if (k == 0) {
        flag = false;
      }
      if (k == (row - 1)) {
        flag = true;
      }
      if (flag)
        --k;
      else
        ++k;
    }

    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        if (arr[i][j] != 0)
          System.out.print(arr[i][j]);
        else
          System.out.print(" ");
      }
      System.out.println();
    }
  }
}