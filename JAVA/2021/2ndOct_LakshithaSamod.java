package assignment;

import java.util.Scanner;

/**
 *
 * @author Lakshitha Samod
 */

public class ZigZag {
    public static void main(String[] args) {
        
        //getting input from user
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();

        int[][] matrix = new int[x][y];
        boolean flag = true;

        int i = 0;
        for(int j = 0; j <y; j++){
            matrix[i][j] = j + 1;


            if(i == 0)
                flag = false;
            if(i == x-1)
                flag = true;


            if(flag)
                i--;
            else
                i++;
        }


        for (int k = 0; k < x; k++){
            for (int j = 0; j < y; j++){
                if(matrix[k][j] > 0)
                    System.out.print(matrix[k][j] + " ");
                else
                    System.out.print("  ");
            }
            System.out.println();
        }
    }
}
