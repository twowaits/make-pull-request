import java.util.*;
public class  twistfibanocci{
  static boolean isPrime(int n)
    {
        
        if (n <= 1)
            return false;
  
        
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;
  
        return true;
    }
    public static void main(String[] args){
      Scanner sc=new Scanner(System.in);
      int n ,sum, x,y;
      x=1;
      y=1;
      n=sc.nextInt();
      System.out.print(x+" "+y+" ");
      for(int i=2;i<n;i++)
      {
        sum=x+y;
        if(sum%5==0) System.out.print(0+" ");
        else if(isPrime(sum)) System.out.print(0+" ");
        else System.out.print(sum+" ");
        x=y;
        y=sum;


      }





        }
}