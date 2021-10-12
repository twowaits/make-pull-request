/*
    ====About===
    name = AAKASH JAIN
    Hacktoberfest 2021, my first COMMIT.
    
    Thanks to Twowaits!!

*/
import java.util.Scanner;
public class zigzagProblem{
    public static void main(String[] args){
       
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(); // rows input
        int c = sc.nextInt(); // columns input
        int[][] matrix = new int[r][c];
        printZigzag(r, c, matrix);
    }
    public static void printZigzag(int r , int c , int[][] matrix){
        int r1 = 0; // for increment in rows
        int c1 = 0; // for increment in columns
        boolean flag = true;// for checking the position if within range or not

        while(c1 < c){
            matrix[r1][c1] = c1 + 1;
            if(r1 == 0) // if within range of rows
                flag = false;
            if(r1 == r - 1) // reaches at the last
                flag = true;


            if(flag) // incrementing and decrementing rows for upward and downward movement
                r1--;
            else
                r1++;
                
            c1++; // incrementing column
        }
        // printing the matrix
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                if(matrix[i][j] > 0){
                  System.out.print(matrix[i][j] + " ");
                }
                else{
                  System.out.print("  ");
                }

            }
            System.out.println();
        }
        
    }
}
