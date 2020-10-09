
import java.util.Scanner;

public class asa {

	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
	       int a=s.nextInt();
	       int b=s.nextInt();
	       a=fact(a);
	       b=fact(b);
	       System.out.print(gcd(a,b));
	}

	private static int gcd(int a, int b) {
		if (a == 0)
	       return b;
	    if (b == 0)
	       return a;
	    if (a == b)
	        return a;
	     if (a > b)
	        return gcd(a-b, b);
	    return gcd(a, b-a);
		
		
	}

	private static int fact(int n) {
	    if(n>1)
	    return n*fact(n-1);
	    else
	    return 1;
	}

}
