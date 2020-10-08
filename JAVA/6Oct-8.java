import java.io.*;
import java.util.*;

public class Main
  {
      public static boolean Prime(int n)
    {
      if(n==1)
      {
           return false;
      }
      else
      {
        boolean flag=true;
        for(int i=2;i<=n/2;i++)
         {
          if(n%i==0)
           {
             flag=false;
             break;
           }
         }
       return flag;
      }
   }
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number of terms");
        int n=sc.nextInt();
        
        int a = 1, b = 1,sum=0;
        
        for (int i = 1; i <= n; i++)
         {
           if(a%5==0||Prime(a))
             {
               System.out.print(0 + " ");
             }
           else
             {
               System.out.print(a + " ");
             }
            sum = a + b;
            a = b;
            b = sum;
        }
    }
  }
