import java.util.*;
class Fibonacci
{	
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int fib[]=new int[n];
    int i,a=1,b=1,c,count=0;
    fib[0]=fib[1]=1;
    for(i=2;i<n;i++)
    {
    	c=a+b;
      fib[i]=c;
      a=b;
      b=c;
    }
    for(i=2;i<n;i++)
    {
    	if(fib[i]%5==0)
    	{
    		fib[i]=0;
    		continue;
    	}
    	else
			{
				for(int j=2;j<=fib[i];j++)
   	 	{
    			if(fib[i]==1)
    			break;
    			if(fib[i]%j==0)
    			count++;
    		}
    		if(count==1)
    		fib[i]=0;
    		count=0;
  		}
  	}
		for(i=0;i<n;i++)
		System.out.print(fib[i]+" ");
	}
}
