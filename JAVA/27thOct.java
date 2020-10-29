import java.util.*;
class hacktoberfest3
{
    public static void main(String[] args)
    {
        Scanner d=new Scanner(System.in);
        int i,n;
        System.out.println("Enter the last value");
        n=d.nextInt();
        for(i=1;i<n;i++)
        {binary(i);
         System.out.print(", ");
       }
       binary(i);
    }
     static void binary(int i)
    {
        int j=0,r,s=1;
        while(i>0)
        {
            j=j+(i%2)*s;
            s=s*10;
            i=i/2;
        }
        System.out.print(j);        
    }
}
