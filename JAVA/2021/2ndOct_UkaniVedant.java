import java.util.*;
 public class Pattern {


         public static void main(String[] args) {

             int numRows= 0;
             int numCols=0;

             Scanner scn = new Scanner(System.in);
             System.out.println("enter number of rows");
             numRows = scn.nextInt();
             System.out.println("enter number of column");
             numCols = scn.nextInt();



             int modulus = ((numRows-1)  * 2);

             for (int i = 0; i < numRows; ++i)
             {
                 for (int j = 0; j < numCols; ++j)
                 {
                     int modCol = (j % modulus);
                     if (modCol >= numRows)
                     {
                         modCol -= numRows;
                         modCol = ((numRows - 1) - (modCol + 1));
                     }

                     if (modCol == i)
                     {
                         System.out.print(j+1);
                     }
                     else
                     {
                         System.out.print(" ");
                     }
                 }
                 System.out.print("\n");
             }
         }
 }
