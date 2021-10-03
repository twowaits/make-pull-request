package com.company;
import java.util.Scanner;

public class fib {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        fib(n);
    }
    static void fib(int n){
        int a = 0;
        int b = 1;
        int c;
        System.out.println(a + " ");
        for(int i = 0; i<n; i++){
            boolean p = primeN(b);
            if(p == true || b % 5 == 0){
                System.out.println(0);
                c = a + b;
                a = b;
                b = c;
                continue;

            }
            System.out.println(b + " ");
            c = a + b;
            a = b;
            b = c;
        }
    }
    static boolean primeN(int n){
        if(n == 1){
            return false;
        }
        for(int i=2; i<=Math.sqrt(n); i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
}
