import java.io.*;
import java.util.*;

public class Main 
  {
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number of terms");
        int n=sc.nextInt();
        
        int n1 = 1, n2 = 1,x;
        
        for (int i = 1; i <= n; i++)
        {
           x=isPrime(n1);
           
           if(n1%5==0||x==1)
             {
               System.out.print(0 + " ");
             }
           else
             {
               System.out.print(n1 + " ");
             }

            int nth = n1 + n2;
            n1 = n2;
            n2 = nth;
        }
    }
    
    public static int isPrime(int n)
    {
      if(n==1)
      {
           return 2;
      }
      else
      {
        int x=1;
        for(int i=2;i<=n/2;i++)
         {
          if(n%i==0)
           {
             x=2;
             break;
           }
         }
       return x;
      }
   }
  }
