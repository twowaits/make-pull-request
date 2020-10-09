package JAVA;
import java.util.*;
import java.lang.*;
import java.io.*;
class funct{
    public static void main(String str[])
    {
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        int y=sc.nextInt();
        int a=x,b=y;
        x=fact(x);
        y=fact(y);
      
        System.out.println("The GCD of Factorial of "+a+" and "+b+" is ="+gcd(x,y));
    }
    public static int fact(int a)
    {
          if(a==0|| a==1)
          return 1;
          return a*fact(a-1) ;
    }
    public static int gcd(int a,int b)
    {
    if (a == 0)
    return b;
  if (b == 0)
    return a;

  // base case
  if (a == b)
      return a;

  // a is greater
  if (a > b)
      return gcd(a-b, b);
  return gcd(a, b-a);
}

    
}
