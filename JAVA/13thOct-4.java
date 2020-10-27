import java.util.Scanner;
// Java program to fill a matrix with values from 1 to n*n in spiral form
class spiral {
    // driver function
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();// n = no. of rows and columns
        int a[][] = new int[n][n];//initializing matrix
        spiralFill(n, a); // calling function
        //printing the matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(a[i][j] + " ");
            }
            System.out.println("");
        }
    }
    // Fills a[n][n] with values from 1 to n*n in spiral fashion
    static void spiralFill(int n, int a[][]) {
        // Initialize value to be filled in matrix
        int val = 1;
        /*  k - starting row index
        row - ending row index
        l - starting column index
        col - ending column index */
        int k = 0, l = 0,row = n, col = n;
        while (k < row && l < col) {
            for (int i = l; i < col; ++i) {
                a[k][i] = val++;
            }
            k++;
            for (int i = k; i < row; ++i) {
                a[i][col - 1] = val++;
            }
            col--;
            if (k < row) {
                for (int i = col - 1; i >= l; --i) {
                    a[row - 1][i] = val++;
                }
                row--;
            }
            if (l < col) {
                for (int i = row - 1; i >= k; --i) {
                    a[i][l] = val++;
                }
                l++;
            }
        }
    }
}
