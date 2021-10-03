/*

    Author: Yash Wasalwar
    Date : 02/10/2021
*/

package com.company;
import java.util.*;

public class Main {
    public static void main(String[] args) {

        //getting input from user
        Scanner sc = new Scanner(System.in);
        int row = sc.nextInt();
        int col = sc.nextInt();

        //2-D matrix creation
        int[][] patternMatrix = new int[row][col];

        patternCreation(patternMatrix,row,col);

    }

    public static void patternCreation(int [][] arr, int row, int col){

        //flag for upward or downward motion check!
        boolean flag = true;

        int rowNo = 0;
        int colNo = 0;

        while(colNo < col){
            arr[rowNo][colNo] = colNo + 1;
            if(rowNo == 0){
                flag = false;
            }
            if(rowNo == row - 1){      //rowNo reaches at last row
                flag = true;
            }

            //condition to increment or decrement rowNo
            if(flag){
                rowNo--;
            }else{
                rowNo++;
            }

            colNo++;
        }

        //printing the matrix
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                if(arr[i][j] > 0){
                  System.out.print(arr[i][j] + " ");
                }
                else{
                  System.out.print("  ");
                }
                    
            }
            System.out.println();
        }

    }
}
