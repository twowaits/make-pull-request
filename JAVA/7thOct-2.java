/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;
import java.lang.*;
class GFG {
	public static void main (String[] args) {
	Scanner in=new Scanner(System.in);
	int r =1;
    String str=in.next();
    char s[]=str.toCharArray();
	int len = str.length();
	for(int i=0;i<len;i++)
	{
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
		{
			 r=2;
			 
		}
		}	
	if(r==1)
	{
	switch(len)
	{
		case 1:
			System.out.print(s);
			
		case 2:
			System.out.print( s[0]);
			System.out.print( " ten and ");
			System.out.print( s[1]);
			
		case 3:
			System.out.print( s[0]);
			System.out.print( " hundreds ");
			System.out.print(  s[1]);
			System.out.print( " ten and ");
			System.out.print( s[2]);
			
		case 4:
			System.out.print( s[0]);
			System.out.print( " thousands ");
			System.out.print( s[1]);
			System.out.print(" hundreds ");
			System.out.print(s[2]);
			System.out.print( " tens and ");
			System.out.print( s[3]);
			
		case 5:
			System.out.print( s[0]);
			System.out.print( s[1]);
			System.out.print( " thousands ");
			System.out.print( s[2]);
			System.out.print(" hundreds ");
			System.out.print(s[3]);
			System.out.print( " tens and ");
			System.out.print( s[4]);
			
		case 6:
			System.out.print( s[0]);
			System.out.print( " lac ");
			System.out.print( s[1]);
			System.out.print( s[2]);
			System.out.print( " thousands ");
			System.out.print( s[3]);
			System.out.print(" hundreds ");
			System.out.print(s[4]);
			System.out.print( " tens and ");
			System.out.print( s[5]);
			
		case 7:
			System.out.print( s[0]);
			System.out.print( s[1]);
			System.out.print( " lacs ");
			System.out.print( s[2]);
			System.out.print( s[3]);
			System.out.print( " thousands ");
			System.out.print( s[4]);
			System.out.print(" hundreds ");
			System.out.print(s[5]);
			System.out.print( " tens and ");
			System.out.print( s[6]);
			
		case 8:
			System.out.print(  s[0]);
			System.out.print( " crores ");
			System.out.print( s[1]);
			System.out.print( s[2]);
			System.out.print( " lacs ");
			System.out.print( s[3]);
			System.out.print( s[4]);
			System.out.print( " thousands ");
			System.out.print( s[5]);
			System.out.print(" hundreds ");
			System.out.print(s[6]);
			System.out.print( " tens and ");
			System.out.print( s[7]);
			
		case 9:
			System.out.print( s[0]);
			System.out.print( s[1]);
			System.out.print( " crores ");
			System.out.print( s[2]);
			System.out.print( s[3]);
			System.out.print( " lacs ");
			System.out.print( s[4]);
			System.out.print( s[5]);
			System.out.print( " thousands ");
			System.out.print( s[6]);
			System.out.print(" hundreds ");
			System.out.print(s[7]);
			System.out.print( " tens and ");
			System.out.print( s[8]);
			
			
			
	}
}
else {
	System.out.print("Please Provide a valid number");
}
}
}
