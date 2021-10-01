import java.util.*;
public class Fibovacci
{
  public static boolean isPrime(int n)
  {
    if(n<=1)
      return false;
    for(int i=1;i<n;i++)
      if(n%5==0)
        return false;
    
    return true;
  }
  public static void main(String[] args)
  {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter NO. of terms to print");
     int i=nextInt();
    int f1=1,f2=1;
    System.out.print(f1+" "+f2+" ");
    for(int i=1;i<n-1;i++)
    {
      int nxt=f1+f2;
      if(isPrime(nxt)){
        System.out.print(0+" ");
      }
      else{
        System.out.print(nxt+" ");
      }
      f1=f2;
      f2=nxt;
    }
  }
}
