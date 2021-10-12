import java.io.*;
import java.util.*;
 public class Main
{
	public static boolean prime(int i)
	{
	   boolean res=(i==1)?false:true;
	   for(int j=2;j*j<i;j++)
	   {
	       if(i%j==0)
	        res=false;
	   }
	   return(res);
	}
	public static List<Integer> function(int n,List<Integer> l)
	{
	   int a=1,b=1,c=0;
	   l.add(1);
	   l.add(1);
	   List<Integer> p=new ArrayList<Integer>();
	   for(int i=0;i<n-2;i++)
	   {
	       c=a+b;
	       l.add(c);
	       a=b;
	       b=c;
	   }
	   for(int i:l)
	   {
	       if(prime(i) || i%5==0)
	       {
	            p.add(0);
	       }
	       else{
	           p.add(i);
	       }
	   }
	   return(p);
	}
	public static void main(String[] args) {
		Scanner y=new Scanner(System.in);
		List<Integer> l=new ArrayList<Integer>();
		List<Integer> c=new ArrayList<Integer>();
		int n=y.nextInt();
		System.out.print(function(n,l));
	}
}
