package com.main;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Row Value : ");
        int row = sc.nextInt();
        System.out.println("Enter Column Value : ");
        int column = sc.nextInt();

        int n = 1;
        for (int j=1; j<=column; j++) {
            if (j == n) {
                System.out.print(n);
                n += (row - 1) * 2;
            }
            else {
                System.out.print("  ");
            }
        }
        System.out.println();

        for (int i=2; i<=row-1; i++) {
            n = i;
            int m = (row * 2) - i;
            for (int j=1; j<=column; j++) {
                if (j == n) {
                    System.out.print(n);
                    n += (row - 1) * 2;
                }
                else if (j == m) {
                    System.out.print(m);
                    m += (row - 1) * 2;
                }
                else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }

        n = row;
        for (int j=1; j<=column; j++) {
            if (j == n) {
                System.out.print(n);
                n += (row - 1) * 2;
            }
            else {
                System.out.print("  ");
            }
        }

    }

}
