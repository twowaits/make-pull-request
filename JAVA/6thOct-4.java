//importing this package which contains scanner class
import java.util.*;
//class
class twist_fibo
{
//main function
public static void main(String args[])
{
//creating object sc of scanner class  which will be used to take input from user
Scanner sc=new Scanner(System.in);
//taking integer input from the user and storing it in n
int n=sc.nextInt();
//calling fib by passing n to it
fib(n);
}//main ends
//fib function taking n in n1
public static void fib(int n1)
{
//setting initial two value of  series which is 1 1 as per the given testcase
int a=1;
int b=1;
//c variable
int c;
//loop in which i goes from 1 to n1
for(int i=1;i<=n1;i++)
{
//setting flag to 0
int flag=0;
//if i is either 1 or 2 
if(i==1 || i==2)
{//print 1 because 1st and 2nd term will be 1 1 as per the given testcase
System.out.print("1 ");
}
//otherwise
else
{
//calculating next term c as a+b
c=a+b;
//now setting a to b as previous a will be of no use when next term is to be calculated
a=b;
//and setting b to c as this c will be served as second term when next term to it will be calculated
b=c;
//loop in which j goes from  2 to c/2
//this loop is to check if c is a prime number or not
//a prime number is the number which has factors as only 1 and that number itself
//now a number can be divided fully by another number  only when that another number  should be  less than equal to its half
//thats why j goes upto c/2 and starts from 2 as 1 should not be considered
for(int j=2;j<c/2;j++)
{
//now if after dividing c by j we get remainder 0 that means  it is not a prime number as it get divided by another number j which is not either c or 1
if (c%j==0)
{
//setting flag to 1
flag=1;
//go out of the loop
break;
}

}//loop of j ends
//if c is a multiple of 5 or flag is equal to 0(prime number)
if(c%5==0 || flag==0)
System.out.print("0 ");//print 0
//otherwise
else
System.out.print(c+" ");//print that number only

}//else ends

}//loop for i ends
}//fib ends
}//class ends					
