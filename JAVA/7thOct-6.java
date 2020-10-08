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
         
     String s1[] ={"crores" , "lacs" , "thousands" , "hundreds" , "tens"};
    if(c.length==9)
     
     { 
        
         System.out.println(c[0]+c[1]+ " "+ s1[0]+ " "+ c[2]+c[3]+ " "+s1[1]+ " "+c[4]+ " "+c[5]+ " "+s1[2]+ " "+c[6]+ " "+s1[3]+ " "+c[7]+ " "+s1[4]+ " "+"and"+ " "+c[8]);
     }
     
    else if(c.length==8)
     
     { 
        if(c[0]=='1')
         {System.out.println(c[0]+" "+ "crore"+" " + c[1]+c[2]+" "+s1[1]+" "+c[3]+c[4]+" "+s1[2]+" "+c[5]+" "+s1 [3]+" "+c[6]+" "+s1[4]+" "+"and"+" "+c[7]);}
        else{ 
         System.out.println(c[0]+ " "+ s1[0]+ " "+ c[1]+ c[2]+ " "+s1[1]+ " "+c[3]+ c[4]+ " "+s1[2]+ " "+c[5]+ " "+s1 [3]+ " "+c[6]+ " "+s1[4]+ " "+"and"+ " "+c[7]);}
     }
    else if(c.length==7)
     
     { 
         System.out.println(c[0]+  c[1]+ " "+s1[1]+ " "+c[2]+ c[3]+ " "+s1[2]+ " "+c[4]+ " "+s1 [3]+ " "+c[5]+ " "+s1[4]+ " "+"and"+ " "+c[6]);
     }
    else  if(c.length==6)
     
     { 
        if(c[0]=='1')
         {System.out.println(c[0]+ " "+ "lac"+ " " + c[1]+c[2]+ " "+s1[2]+ " "+c[3]+ " "+s1[3]+ " "+c[4]+ " "+s1[4]+ " "+"and"+ " "+c[5]);}
        else{ 
         System.out.println(c[0]+ " "+ s1[1] + " "+ c[1]+ c[2]+ " " +s1[2]+ " "+ c[3] + " "+s1[3] + " "+c[4] + " "+s1[4] + " "+"and"+ " "+c[5]);}
     }
    else  if(c.length==5)
     
     { 
        
         System.out.println(c[0]+" "+ c[1]+ " "+ s1[2] + " "+ c[2]+ " "+ s1[3]+ " "+ c[3]+  " "+ s1[4]+ " "+ "and"+ " "+ c[4]);
     }
     else if(c.length==4)
     
     { if(c[0]=='1')
     {
        System.out.println(c[0]+ " "+ "thousand" +" "+ c[1]+c[2]+" "+s1[3]+" "+"and"+" "+c[3]);}
        else{
         System.out.println(c[0]+ " "+ s1[2]+ " " + c[1]+c[2]+ " "+ s1[3]+ " "+ "and"+ " "+ c[3]);}
     }
    else if(c.length==3)
     
     {  if(c[0]=='1')
         {System.out.println(c[0]+" "+ "hundred" +" "+ c[1]+ " "+ s1[4]+ " "+ "and"+ " "+ c[2]);}
        else{
         System.out.println(c[0]+" "+ s1[3] +" "+ c[1]+ " "+ s1[4]+ " "+ "and"+ " "+ c[2]);}
     }
     
    else  if(c.length==2)
     
     { if(c[0]=='1')
        {System.out.println(c[0]+" "+ "ten" +" "+ "and"+ " "+ c[1]);}
        else{
         System.out.println(c[0]+" "+ s1[4] +" " + "and"+ " "+ c[1]);}
     }
    else if(c.length==1)
     { 
       System.out.println(c[0]);
     }
	}
}
      
