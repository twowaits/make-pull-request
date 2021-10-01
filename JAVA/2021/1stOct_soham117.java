// Implementing Finbacci series using Loops
// To run this program rename the file name to Fibonacci.java
import java.util.Scanner;
public class Fibonacci
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
 
    int n,a=0, b=1, c=0;
 
    System.out.println("Enter the value of n");
    n = in.nextInt();
 
    //Output the first and second element
    System.out.print(a+" "+b+" ");
 
    for(int i=3; i<=n; i++){
      //Always update c first, second a and last b
      c = a+b;
      a = b;
      b = c;
      System.out.print(c+" ");
    }
  }
}