// Zig-Zag Problem 
// By: Tandrima Singha
import java.util.Scanner;


public class zigzag{

    public static void main(String[] args){

         Scanner sc = new Scanner(System.in);

          int x = sc.nextInt(); 

          int y = sc.nextInt(); 

        int[][] matrix = new int[x][y];

        printZigzag(x, y, matrix);

    }

    public static void printZigzag(int x , int y , int[][] matrix){

        int x1 = 0; 

        int y1 = 0; 

        boolean flag = true;

       while(x1 < x){

            matrix[x1][y1] = y1 + 1;

            if(x1 == 0) 

                flag = false;

            if(x1 == x - 1) 

                flag = true;

            if(flag) 

                x1--;

            else

                x1++;

            y1++; 

        }
        for (int i = 0; i < x; i++){

            for (int j = 0; j < y; j++){

                if(matrix[i][j] > 0){

                  System.out.print(matrix[i][j] + " ");

                } else{

                  System.out.print("  ");

                }
            }
            System.out.println();

        }

    }

}
