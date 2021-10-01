// Fibonacci Series with a Twist

import java.util.*;
public class main {   

	    public static void main(String[] args) {
	      Scanner sc = new Scanner(System.in);
	      int n = sc.nextInt();
	      int a = 1;
	      int b = 1;
	      System.out.print(a+ " "+ b+ " ");
	      for(int i = 2; i < n; i++)
	      {
	        int c = a + b;  
	        if( c % 5 == 0 )
	             System.out.print(0+ " ");
	        else if(isPrime(c))
	             System.out.print(0+ " ");
	        else
	             System.out.print(c+ " ");
	        a = b;
	        b = c;
	      }
	    }
	    
	    public static boolean isPrime(int n)
	    {
	        if (n <= 1)
	            return false;

	        for (int i = 2; i < n; i++)
	            if (n % i == 0)
	                return false;

	        return true;
	    }
	}
