import java.util.Scanner;

class ZigZagProblem {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int row, col;
        // Taking rows and columns as input
        row = in.nextInt();
        col = in.nextInt();

        // Initialising a 2D array to store the pattern
        int[][] matrix = new int[row][col];
        boolean isDirectionUpward = false;  // If true then we must add elements in the upward direction else downward
        int currentRow = 0;
        int currentCol = 0;
        // Loop which will run for col number of times and store the correct element
        // at corresponding row and col in the matrix
        while (currentCol < col) {
            matrix[currentRow][currentCol] = currentCol + 1;  // Since array indices are from 0 to n-1, we need to add 1
            if (currentRow == 0) {
                isDirectionUpward = false;
            }
            if (currentRow == row - 1) {
                isDirectionUpward = true;
            }
            if (isDirectionUpward) {
                currentRow -= 1;
            } else {
                currentRow += 1;
            }
            currentCol++;
        }

        // Displaying the pattern
        for (currentRow = 0; currentRow < row; currentRow++) {
            for (currentCol = 0; currentCol < col; currentCol++) {
                if (matrix[currentRow][currentCol] != 0) {
                    System.out.print(matrix[currentRow][currentCol] + "  ");
                } else {
                    System.out.print("   ");
                }
            }
            System.out.println();
        }
    }
}

/*
---Displaying sample input and output (Using different values compared to test case for verification)---
8 30
1                                         15                                         29
   2                                   14     16                                   28     30
      3                             13           17                             27
         4                       12                 18                       26
            5                 11                       19                 25
               6           10                             20           24
                  7     9                                   21     23
                     8                                         22
 */