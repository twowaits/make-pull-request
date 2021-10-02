import java.util.*;

public class _1stOct_avikkundu {
	
	static boolean isPrime(long n)
	{
		
		
		for(long i=2;i<=n/2;i++)
		{
			if(n%i==0)
				return false;
		}
		return true;
	}
	
	public static void main(String[] args)
	{
        Scanner sc=new Scanner(System.in);
        
        long n;
        n=sc.nextInt();
        
        long a=1,b=1;
        if(n==1)
        	System.out.print("1");
        else
        {
        	System.out.print("1 1 ");
            for(int i=3;i<=n;i++)
            {
            	long c=a+b;
            	a=b;
            	b=c;
            	if(!isPrime(c) && c%5!=0)
            	System.out.print(c+" ");
            	else
            		System.out.print("0 ");
            }
        }

	}

}
