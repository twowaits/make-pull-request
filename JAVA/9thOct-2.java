package archit;
import java.util.*;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
       int a=s.nextInt();
       int b=s.nextInt();
       if(a<b)
       {
    	   System.out.println(factorial(a));
       }
       else
       {
    	   System.out.println(factorial(b));
       }
    }

	private static int factorial(int n) {
		
		return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);	
		
	}
}