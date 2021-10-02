//Zigzag Pattern
import java.util.Scanner;

class ZigZag 
{
  public static void main(String args[]) 
  {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter number of rows: ");
    int rows = sc.nextInt();
    System.out.print("Enter number of columns: ");
    int column = sc.nextInt();

    int[][] arr = new int[rows][column];
    int k = 0;
    boolean var = true;

    for (int j = 1; j <= column; j++) 
    {
      arr[k][j - 1] = j;
      if (k == 0) 
      {
        var = false;
      }
      if (k == (rows - 1)) 
      {
        var = true;
      }
      if (var)
        --k;
      else
        ++k;
    }

    for (int i = 0; i < rows; i++) 
    {
      for (int j = 0; j < column; j++) 
      {
        if (arr[i][j] != 0)
          System.out.print(arr[i][j]);
        else
          System.out.print(" ");
      }
      System.out.println();
    }
  }
}