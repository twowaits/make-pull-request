package com.company;
import java.util.*;

public class Main {
    public static void main(String[] args) 
    {
        //getting input from user
        Scanner sc = new Scanner(System.in);
        int row = sc.nextInt();
        int col = sc.nextInt();

        //2-D matrix creation
        int[][] patternMatrix = new int[row][col];

        patternCreation(patternMatrix,row,col);
    }

    public static void patternCreation(int [][] arr, int row, int col)
    {
        //rev for upward or downward motion check!
        boolean rev = true;

        int rowNum = 0;
        int colNum = 0;

        while(colNum < col)
        {
            arr[rowNum][colNum] = colNum + 1;
            if(rowNum == 0)
                rev = false;

            if(rowNum == row - 1)      //rowNum reaches at last row
                rev = true;

            //condition to increment or decrement rowNum
            if(rev)
                rowNum--;

            else rowNum++;

            colNum++;
        }

        //printing the matrix
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if(arr[i][j] > 0)
                  System.out.print(arr[i][j] + " ");

                else  System.out.print("  ");
            }
            System.out.println();
        }
    }
}
