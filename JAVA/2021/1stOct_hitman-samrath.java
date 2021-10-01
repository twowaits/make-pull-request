import java.util.*;
public class Main
{
    public static boolean prime(long c)
    {
        if(c==1)
        return false;
        for(long i=2; i<=(long)Math.sqrt(c); i++)
        {
            if(c%i==0)
            return false;
        }
        return true;
    }
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int i, n;
	    long a=1, b=0, c;
	    n=sc.nextInt();
	    for(i=0; i<n; i++)
	    {
	        c=a+b;
	        a=b;
	        b=c;
	        if(prime(c) || c%5==0)
	        System.out.print("0 ");
	        else
	        System.out.print(c+" ");
	    }
	}
}
