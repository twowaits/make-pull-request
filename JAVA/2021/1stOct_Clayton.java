package java_class;
import java.util.Scanner;
import java.util.*;
public class Fibo {   
public class main {   
	 public static boolean PrimeN(int n)
	    {
	        if (n <= 1)
	            return false;
	  
	        for (int j = 2; j < n; j++)
	            if (n % j == 0)
	                return false;
                  return true;
	    }
	  
	    public static void main(String[] args)
      {
	      Scanner sc=new Scanner(System.in);
        
	      int n=sc.nextInt();
	      int a = 1;
	      int b=1;
	      System.out.print(a+" "+b+" ");
	      for(int j=2; j<n; j++)
	      {
	        int c=a+b;  
	        if(c%5==0)
	             System.out.print(0+" ");
	        else if(PrimeN(c))
	             System.out.print(0+" ");
	        else
	             System.out.print(c+" ");
	        a=b;
	        b=c;
	      }
	    }
	} 
	}
