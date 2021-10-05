/*

Problem Statement:

** ZigZag Problem

Add following functionalities to it :

Take input of number of rows and columns.
Print the following zigzag pattern.
Sample Input :
7 16

Sample Output :

1                       13 
  2                  12  14
    3              11        15
      4          10             16
        5      9
          6  8
            7
*/


import java.util.*;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        sc.close();

        int[][] matrix = new int[a][b];

        // initializing the matrix to get the pattern.
        boolean flag = true;

        int k = 0;
        for(int j = 0; j < b; j++){
            matrix[k][j] = j + 1;
            
            // once the row reached the first one make it false so it goes down, once it reaches up make it true so that it goes up.            
            if(k == 0)
                flag = false;
            if(k == a-1)
                flag = true;
            
            // if the flag is true then decrease the row(k), else increase the row(k).
            if(flag)    
                k--;
            else
                k++;    
        }

        // printing the final matrix.
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
                if(matrix[i][j] > 0)
                    System.out.print(matrix[i][j] + " ");
                else
                    System.out.print("  ");
            }
            System.out.println();
        }
    }
}
