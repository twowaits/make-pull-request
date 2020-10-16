import java.util.*;
  import java.io.*;
  
  public class Main {
    static long fact(long n)
    {
      if (n==1 || n==0)
      {
        return 1;
      }
      return (n*fact(n-1));
    }
    public static void main(String args[]) throws IOException {
      
      //write your code here
      Scanner sc=new Scanner(System.in);
      int t=sc.nextInt();
      while(t-->0)
      {
        long n=sc.nextLong();
        System.out.println(fact(n));
    }
  }
}
