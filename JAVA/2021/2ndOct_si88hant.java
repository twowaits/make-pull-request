import java.lang.*;
import java.util.*;

public class ZigZagProblem{
    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();

        String grid[][] = new String[k][n];

        for(int i = 0; i < k; i++){
            for(int j=0; j<n; j++){
                grid[i][j]=" ";
            }
        }

        for(int i = 0; i < n; i++){
            int m = k - 1;
            int col = m - Math.abs(i%(2*m)-m);
            grid[col][i] = Integer.toString(i+1);
        }

        for(int i=0; i<k; i++){
            for(int j=0; j<n; j++){
                System.out.print(grid[i][j]);
            }
            System.out.println();
        }
    }
} 