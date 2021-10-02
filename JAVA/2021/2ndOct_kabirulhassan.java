import java.util.Arrays;
import java.util.Scanner;

class Pattern{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i,j=0,cf=1; //cf is the flag variable
        int row = sc.nextInt();
        int col = sc.nextInt();
        String pattern[][] = new String[row][col];
        for(String[] r: pattern)
            Arrays.fill(r, "  ");
        for(i=1;i<=col;i++)
        {
            pattern[j][i-1]=Integer.toString(i);
            if(i==row||i==(2*row)-1)
                cf*=-1;
            j+=cf;
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                System.out.print(pattern[i][j]);
            System.out.println();
        }
        sc.close();
    }
}