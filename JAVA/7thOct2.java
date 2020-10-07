import java.util.*;

public class 	Main {
    
    public void pw(int n, String str)
	{
		String one[] = { " ", " One", " Two", " Three", " Four", " Five", " Six", " Seven", " Eight", " Nine", " Ten",
				" Eleven", " Twelve", " Thirteen", " Fourteen", "Fifteen", " Sixteen", " Seventeen", " Eighteen",
				" Nineteen" };
 
		String ten[] = { " ", " ", " Twenty", " Thirty", " Forty", " Fifty", " Sixty", "Seventy", " Eighty", " Ninety" };
 
		if (n > 19)
		{
			System.out.print(ten[n / 10] + " " + one[n % 10]);
		}
		else
		{
			System.out.print(one[n]);
		}
		if (n > 0)
			System.out.print(str);
	}
 
	public static void main(String[] args)
	{
	    	Scanner in = new Scanner(System.in);
	    	int	t = in.nextInt();
	    while(t-->0){
	
	int	n = in.nextInt();
 
		if (n <= 0)
		{
			System.out.println("Enter numbers greater than 0");
		}
		else
		{
			Main a = new 	Main();
			a.pw((n / 1000000000), " Hundred");
			a.pw((n / 10000000) % 100, " crore");
			a.pw(((n / 100000) % 100), " lakh");
			a.pw(((n / 1000) % 100), " thousand");
			a.pw(((n / 100) % 10), " hundred");
			a.pw((n % 100), " ");
		}
		System.out.println();
	    }
	}
}
