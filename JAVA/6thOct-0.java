import java.util.*;
class Hacktober 
{ 
    
    static void printFibonacciNumbers(int n) 
    { 
        int f1 = 0, f2 = 1, i; 
      
        if (n < 1) 
            return; 
      
        for (i = 1; i <= n; i++) 
        { 
            int n;
            if(isPrime(f2)==true)
            {
                n=f2;
                f2=0;
            }
            if(f2%5==0)
            {
                n=f2;
                f2=0;
            }
            System.out.print(f2+" "); 
            f2=n;
            int next = f1 + f2; 
            f1 = f2; 
            f2 = next; 
        } 
    } 
    static boolean isPrime(int h) 
    {
        int c=0;
        for(int i=1;i<=h,i++)
        {
            if(h%i==0)
            {
                c++;
            }
        }
        if(c==2)
        return true;
        else 
        return false;
    }
      
    // Driver Code 
    public static void main(String[] args)
    { 
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        printFibonacciNumbers(n); 
    } 
} 
