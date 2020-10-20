//time complexity O(n)
public class Solution {

  private static void search(int[][] matrix, int n, int value) {
    int i = 0, j = n - 1;

    while (i < n && j >= 0) {
      if (matrix[i][j] == value) {
        System.out.print("true");
        return;
      }
      if (matrix[i][j] > value) j--; else i++;
    }

    System.out.print("false");
    return;
  }

  public static void main(String[] args) {
    int matrix[][] = {
      { 1, 4, 7, 11, 15 },
      { 2, 5, 8, 12, 19 },
      { 3, 6, 9, 16, 22 },
      { 10, 13, 14, 18, 24 },
      { 18, 21, 23, 26, 30 },
    };
    int value = 5;
    search(matrix, 4, value);
  }
}
