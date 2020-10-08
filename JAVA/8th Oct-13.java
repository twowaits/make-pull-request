import java.util.*;
class Hollow_Pyramid
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Input a number");
        int n=sc.nextInt();
        String s[][]=new String[n][2*n-1];
        int i=n-1,j=2*n-2,k=0;
        while(k!=n)
        {
            s[i][j]="*";
            s[i][k]="*";
            i--;j--;k++;
        }
        for(j=0;j<2*n-2;j=j+2)
        s[n-1][j]="*";
        for(i=0;i<n;i++)
        {
            for(j=0;j<2*n-1;j++)
            {
                if(s[i][j]==null)
                s[i][j]=" ";
                System.out.print(s[i][j]);
            }
            System.out.println();
        }
    }
}
