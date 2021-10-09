//JAVA program to find GCD of factorials.

import java.util.Scanner;
public class FactorialGCD{
	
static int factorial(int num)
{
	if (num <= 1)
		return 1;
	int fac = 2;
	for (int i = 3; i <= num; i++)
		fac = fac * i;
	return fac;
}

static int gcdOfFactorial(int m, int n)
{
	int min = m < n ? m : n;
	return factorial(min);
}

	 
	public static void main (String[] args)
	{
	    Scanner sc=new Scanner(System.in);
	    int h=sc.nextInt();
	    int j=sc.nextInt();

		

		System.out.println(gcdOfFactorial(h, j));
	}
}
