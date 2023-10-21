package java_class;
import java.util.*;
public class hello {   
	 public static boolean isPrime(int n)
	    {
	        // checking Corner case
	        if (n <= 1)
	            return false;

	        // Check from 2 to n-1
	        for (int i = 2; i < n; i++)
	            if (n % i == 0)
	                return false;

	        return true;
	    }

	    public static void main(String[] args) {
	      Scanner sc=new Scanner(System.in);
	      int n=sc.nextInt();
	      int a = 1;
	      int b=1;
	      System.out.print(a+" "+b+" ");
	      for(int i=2 ;i< n ;i++)
	      {
	        int c=a+b;  
	        if(c%5==0)
	             System.out.print(0+" ");
	        else if(isPrime(c))
	             System.out.print(0+" ");
	        else
	             System.out.print(c+" ");
	        a=b;
	        b=c;
	      }
	    }
	} 
