package com.company;

import java.util.Scanner;

public class TwistedFibonnaci {
    public static boolean PrimeChecker(int num)
    {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter number of terms for Twisted Fibonacci Series: ");
        int n = in.nextInt();
        int first = 1;
        int second = 1;

        System.out.println("Twisted Fobonacci series of " + n + " terms: ");
        System.out.print(first + " " + second + " ");

        for(int i = 2 ; i < n ; i++)
        {
            int next = first + second;

            if(next % 5 == 0) {
                System.out.print(0 + " ");
            }
            else if (PrimeChecker(next)) {
                System.out.print(0 + " ");
            }
            else {
                    System.out.print(next + " ");
                    first = second;
                    second = next;
            }
        }
    }
}
