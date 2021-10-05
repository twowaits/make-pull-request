//Solution of Fibonacci series with a twist

import java.util.Scanner;

public class Main {

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int input;
        System.out.println("Enter your number : ");
        input = sc.nextInt();
        sc.close();

        int fib[] = new int[input+1];
        fib[0] = 0;
        fib[1] = 1;
        for(int i = 2 ; i <= input ; i++) {
            fib[i] = fib[i-1] + fib[i-2];
        }
        for(int i = 0 ;  i <= input ; i++) {
            if(isprime(fib[i]) || fib[i] % 5 == 0) {
                fib[i] = 0;
            }
        }

        for(int i = 1 ; i <= input ; i++) {
            System.out.print(fib[i] + " ");
        }
        System.out.println();
    }

    private static boolean isprime(int N) {
        if(N == 0 || N == 1) {
            return false;
        }
        for(int i = 2 ; i*i <= N ; i++) {
            if(N % i == 0) {
                return false;
            }
        }
        return true;
    }

}
