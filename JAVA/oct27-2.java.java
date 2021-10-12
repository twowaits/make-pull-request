import java.util.*;
import java.lang.*;
import java.io.*;

class oct27
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);
	    int num=sc.nextInt();
	    oct27 obj=new oct27();
	    for(int i=1;i<=num;i++){
	   obj.bin(i);}
}
	    int[] bin(int n){
	        int binary[]=new int[n];
	       int  index=0;
	    if(n==1){
	        System.out.print("1");}
	    else if(n==2){
	        System.out.print("10");}
	    else{ while(n>0)
	    {binary[index++]=n%2;
	        n=n/2;}}
	   for(int d=index-1;d>=0;d--){
	       System.out.print(binary[d]);
	       }
	       System.out.print(" ");
	     return binary;  
         }
        }
