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
      // taking input
      System.out.println("please enter the number till fibonnaci series has to be printed");
      Scanner sc=new Scanner(System.in);
      int n ,sum, x,y;
      x=1;
      y=1;
      n=sc.nextInt();
      System.out.print(x+" "+y+" ");
      for(int i=2;i<n;i++)
      {
        // calculating the sum of the number before this number "i"
        sum=x+y;
        if(sum%5==0) System.out.print(0+" ");//if sum is devisible by 5 printing 0
        else if(isPrime(sum)) System.out.print(0+" ");//if sum is a prime number printing zero
        else System.out.print(sum+" ");//if not any of the above condition printing the correct output
        //changing the values of x and y to proceed for next iteration
        x=y;
        y=sum;


      }





        }
}