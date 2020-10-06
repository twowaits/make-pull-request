import java.io.*;
import java.lang.*;
import java.util.*;

public class Fibonacci {
   public static boolean isPrime(int n){
       if(n==1){
           return false;
       }
       boolean prime=true;
       for(int i=2;i<=n/2;i++){
           pr=true;
           if(n%i==0){
               prime=false;
               break;
           }
       }
       return prime;
   }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){

        int n=sc.nextInt();
        int n1 = 1, n2 = 1;
        for (int i = 1; i <= n; ++i)
        {

          if(n1%5==0||isPrime(n1)){
            System.out.print(0 + " ");
            }
            else{
                System.out.print(n1 + " ");
            }

            int sum = n1 + n2;
            n1 = n2;
            n2 = sum;
        }
        System.out.println();
        }
    }
}
