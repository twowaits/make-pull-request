import java.util.Scanner;

/**
 *
 * @author asunawesker 
 */
public class Main {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner (System.in);
        
        int rows;
                
        System.out.print("Rows: ");
        rows = sc.nextInt();
        
        hollowPyramid(rows);

    } 
    
    public static void hollowPyramid(int rows){
        
        int row = 1;
        int i;
        int spaceAhead = rows - 1;
        int internalSpace = 0;
        
        while (row < rows) {
            for (i = 1; i <= spaceAhead; i++) {
                System.out.print(" ");
            }
            System.out.print("*");
            for (i = 1; i < internalSpace; i++) {
                System.out.print(" ");
            }
            if (row>1) {
                System.out.print("*");
            }
            System.out.println();
            row++;
            spaceAhead--;
            internalSpace += 2;
        } 

        for (i = 1; i <= row; i++) {
          System.out.print("* ");
        }
        
    }
    
}
