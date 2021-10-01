import java.util.Scanner;
public class Fibo
{
public static void main(String args[])
{
Scanner sc = new Scanner(System.in);
int sum = 0, n;
int a = 0;
int b = 1;
System.out.println("Enter the nth value: ");
n = sc.nextInt();
System.out.println("Fibonacci series: ");
while(sum <= n)
{

a = b;  // swap elements
b = sum;
sum = a + b; 
if (sum%5 == 0 )
{
    System.out.print(0 + " ");
    
    
}
else if (Prime(sum)==0)
{
    System.out.print(0 + " ");
}
else{
System.out.print(sum + " ");
}
}
}
 public static int Prime(int sum ) {  
       int mul = sum * sum;
       int c = 0;
       for (int i = 1; i <= sum; i++) {  
           if (sum % i == 0) {  
               c = c + 1;
               
           }  
       }  
       if ( c == 2 )
       {
        return 0;
}
else
{
   return 1; 
}
}
}