import java.util.*;

public class Fibonacci {
    public static void main(String[] args) {
        Scanner bc=new Scanner(System.in);
        int n=bc.nextInt();
        int a = 1;
        int b = 1;
        System.out.print(a+" "+b+" ");
        for(int i=2 ;i< n ;i++)
        {
            int s=a+b;
            if(s%5==0)
                System.out.print(0+" ");
            else if(prime(s))
                System.out.print(0+" ");
            else
                System.out.print(s+" ");
            a=b;
            b=s;
        }

    }

    public static boolean prime( int n) {
        if (n <= 1)
            return false;


        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}

