import java.util.*;
public class main {   
	 public static boolean isPrime(int n)
	    {
	        for (int i = 2; i < n; i++)
	        {
	            if (n % i == 0)
	                return false;
            }
	        return true;
	    }

	    public static void main(String[] args) {
	      Scanner sc=new Scanner(System.in);
	      int n=sc.nextInt();
	      int a = 1;
	      int b= 1;
	      int c= a+b;
	      System.out.print(a+" "+b+" ");
	      for(int i=2;i<n;i++)
	      {
	        if(c%5==0)
	             System.out.print(0+" ");
	        else if(isPrime(c))
	             System.out.print(0+" ");
	        else
	             System.out.print(c+" ");
	        a=b;
	        b=c;
	        c=a+b;
	      }
	    }
	}