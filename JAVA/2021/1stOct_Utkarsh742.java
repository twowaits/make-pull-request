import java.util.*;
import java.lang.*;
class walllah 
{
    public static void main(String args[])
    {
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       int a=1;
       int b=1;
       int c=0;
       System.out.print(a+" "+b+" ");
   for(int j=1;j<=n-2;++j)
       {
           c=0;
           int sum= a+b;
           a=b;
           b=sum;
          for(int i=2;i<sum;++i)
          {
              if(sum%i==0)
              c++;
            }
           if(sum%5==0||c==0)
           System.out.print(0+" ");
              else
             System.out.print(sum +" ");
         
        }
    }
} 
