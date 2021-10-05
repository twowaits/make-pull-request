//1st Oct : Write a Function in C++ to achieve below functionality - Fibonacci Series with a Twist
//Krishan Pathak
package Twist;
import java.util.*;
public class Fibonacci_Series_with_a_Twist {

	public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	int a=0;
	int b=1;
	int c=0;
	System.out.print(b+" ");
	c=a+b;
	for (int i = 1; i < n; i++) 
	{
    	if(c%5==0)
    		System.out.print('0'+" ");
    	else if(is_prime(c))
    		System.out.print('0'+" ");
    	else
    		System.out.print(c+" ");

        a=b;
        b=c;
        c = a+b;
    }
	

	}
	public static boolean is_prime(int n)
	{
		if(n<=1)
		{
			return false;
		}
		for(int i=2;i<n; i++)
		{
			if(n%i==0)
			{
				return false;
			}
			
		}
		return true;
	}

}
