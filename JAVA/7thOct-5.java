import java.lang.*; 
import java.io.*; 
import java.util.*;

public class Main
{
public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter an integer number: ");
        String str= sc.nextLine(); 
        int len=str.length();
        char c[]=str.toCharArray();
        String reverse="";
        //For loop to reverse a string
        for(int i=c.length-1;i>=0;i--)
        reverse+=c[i];

		if (str.charAt(0)=='-')
		{
			System.out.println("Enter numbers greater than 0");
		}
		else
		{
		    
		    String[] numeral=new String[len];
		    for (int i =len-1; i>=0; i--) 
		    {
              char letter = reverse.charAt(i);
              
              if(i==0)
                {
                  numeral[0]= "" +letter;}
              if(i==1)
               {
                   if(letter=='1')
                   numeral[1]= letter +" ten and ";
                   else
                   numeral[1]= letter +" tens and ";
                   
               }
              if(i==2)
                {
                   if(letter=='1')
                   numeral[2]= letter + " hundred ";
                   else
                   numeral[2]= letter + " hundreds ";
                }
              if(i==3)
                {
                   if(letter=='1')
                   numeral[3]= letter + " thousand ";
                   else
                   numeral[3]= letter + " thousands ";
                }
              if(i==4)
              {
              numeral[4]= "" +letter;}
              if(i==5)
              {
                   if(letter=='1')
                   numeral[5]= letter + " Lac ";
                   else
                   numeral[5]= letter + " Lacs ";
              }
              if(i==6)
              {
              numeral[6]= "" +letter;}
              if(i==7)
              {
                   if(letter=='1')
                   numeral[7]= letter + " Crore ";
                   else
                   numeral[7]= letter + " Crores ";
              }
              else if(i>7)
              numeral[i]= "" + letter;
              
            }
            for(int j=len-1;j>=0;j--)
              System.out.print(numeral[j]);

		}
	}
}
