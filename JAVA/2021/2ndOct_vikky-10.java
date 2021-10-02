import java.lang.*;
import java.util.*;
class ZigZag{
    public static void main(String[] arg)
    {
       Scanner in = new Scanner(System.in);
       int row = in.nextInt();
        int column = in.nextInt();
        for(int i=1; i<=row; i++)
        {
            for(int j=1; j<=column; j++)
            {
                if(i==j && i<row)
                     System.out.print(j);
                else if(((i+j) % (row*2) == 0) && j<(row*2-1))
                     System.out.print(j);
                else if((j-i) % (row*2-2) == 0)
 
                    System.out.print(j);
                else
                    System.out.print(" ");
            }
            System.out.println();
        }
     }
}