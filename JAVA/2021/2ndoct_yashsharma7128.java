package com.company;
import java.util.Scanner;


public class Main {

    public static void main(String[] args) {
        System.out.println("enter the number of rows and columns");
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int c = sc.nextInt();
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                int c1 = (j % ((r - 1) * 2));
                if (c1 >= r)
                {
                    c1 = c1 - r;
                    c1 = ((r - 1) - (c1 + 1));
                }

                if (c1 == i)
                {
                    System.out.print(" " + (j+1));

                }
                else
                {
                    System.out.print(" ");

                }
            }
            System.out.println();
        }
    }
}
