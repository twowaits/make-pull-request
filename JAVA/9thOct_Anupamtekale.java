import java.util.*;

class GCD
{
	public static int gcd(int x,int y)
	{
		if(y==0)
			return x;
		else
			return gcd(y,x%y);
	}
	public static int factorial(int n)
	{
		if(n==1)
			return 1;
		else
			return n*factorial(n-1);
	}
	
    public static void main(String args[])
    {
		Scanner in = new Scanner(System.in);
		int arr[] = new int[2];
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=in.nextInt();
			arr[i]=factorial(arr[i]);
		}
	    
		int x = gcd(arr[0],arr[1]);
		System.out.println(x);
		
				
	}
}	
