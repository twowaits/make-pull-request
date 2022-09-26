import java.util.*;
class Fibonacci
{	
   public static void main(String args[])
   {
      Scanner sc=new Scanner(System.in);
      int n=sc.nextInt();
      int fib[]=new int[n];
      int i,a=1,b=1,c,count=0;
      fib[0]=fib[1]=1;
      for(i=2;i<n;i++)
      {
        c=a+b;
        fib[i]=c;
        a=b;
        b=c;
      }
      for(i=0;i<n;i++) 
      System.out.print(fib[i]+" ");
   }
}
 
