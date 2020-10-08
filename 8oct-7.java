import java.util.Scanner;
class pyu
{
public static void main (String args[])
{
Scanner sc=new Scanner(System.in);
System.out.print("Enter the value of n ");
int rows=sc.nextInt();
int p=0;
for(int i=1; i<rows; i++)
{//Print each row 
for(int j=i; j<rows; j++)
{//Print space for Pyramid shape 
System.out.print(" "); 
} 
for(int j=1; j<=(2*i-1); j++)
{//print *
if(  j==1|| j==(2*i-1))
{
  
 System.out.print("*"); 
  }
 else {
 System.out.print(" "); 
 }
}
 System.out.println(); 
}
while(p<rows)
{
    System.out.print("*" + " ");
    p++;
}
}
}