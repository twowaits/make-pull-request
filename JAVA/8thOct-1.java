import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int i, j, k;
	    Scanner s = new Scanner(System.in);
		int row = s.nextInt(); 
		
		for(i=1; i<row; i++){
	        for(j=i; j<row; j++)
	            System.out.printf(" ");
	    
	        for(k=0; k<2*row; k++){
	            if(k == 0||k == 2*i-2)
	                System.out.printf("*");
	            else
	                System.out.printf(" ");
	        }
	        System.out.println();
	    }
	    for(i=0; i<row; i++)
	        System.out.printf("* ");
	
	 }
}
