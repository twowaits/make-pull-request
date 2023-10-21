import java.util.*;
public class Main
{
    
	public static void main(String[] args) {
	    long a=1, b=0, c;
	    Scanner sc=new Scanner(System.in);
	    int n= sc.nextInt();
	    for(int i=0; i<n; i++)
	    {
	        c=a+b;
	        a=b;
	        b=c;
	        if(primeno(c) || c%5==0){
	         System.out.printf("0 "+""); 
	        }
	        else{
	          System.out.printf(c+" "+"");  
	        }
	    }
	}
	
	public static boolean primeno(long c)
    {
        if(c==1)
        return false;
        for(long i=2; i<=(long)Math.sqrt(c); i++)
        {
            if(c%i==0){
               return false;  
            }
        }
        return true;
    }
}
