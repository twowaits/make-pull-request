import java.util.Scanner;

public class Main{
    static boolean isPrime(int n){
        if(n <= 1)
            return false;
        for(int i = 2 ; i <= n/2 ; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
    static int[] fibo(int n){
        int[] fib = new int[n+1];
        fib[0] = 1;
        fib[1] = 1;
        for(int i = 2 ; i <= n ; i++){
            fib[i] = fib[i-1]+fib[i-2];
        }
        return fib;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int fibo[] = fibo(n);
        for(int i = 0 ; i < n ; i++){
            if(isPrime(fibo[i]) || fibo[i]%5 == 0)
                System.out.print("0 ");
            else
                System.out.print(fibo[i]+" ");
        }
    }
} 
