package archit;
import java.util.*;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
       int n=s.nextInt();
       int row=0;
       int nsp=n-1;
       int nmsp=row+1;
       while(row<n)
       {
    	   int csp=0;
    	   
    	   while(csp<nsp)
    	   {
    		   System.out.print(" ");
    		   csp++;
    	   }
    	   nsp--;
    	   if(row==0)
    	   {
    		   System.out.print("*");
    	   }
    	   else if(row==n-1)
    	   {
    		   int cns=0;
    		   int nss=n-1;
    		   while(cns<nss)
    		   {
    			   System.out.print("* ");
    			   cns++;
    		   }
    		   System.out.println("*");
    	   }
    	   else
    	   {
    		   System.out.print("*");
    		   int cmsp=0;
    		   
    		   while(cmsp<nmsp)
    		   {
    			   System.out.print(" ");
    			   cmsp++;
    		   }
    		  
    		   System.out.print("*");
    		   nmsp+=2;
    	   }
    	   row++;
    	   System.out.println();
       }
    }
}