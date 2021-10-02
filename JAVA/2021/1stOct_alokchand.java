// Java program to generate fibonacci series upto n value

import java.util.Scanner;
public class 1stOct_alokchand.java
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int sum = 1, n;
        int a = 0;
        int b = 1;
        System.out.println("Enter the nth value: ");
        n = sc.nextInt();
        System.out.println("Fibonacci series: ");
        System.out.print(1 + " ");
        while(n>1)
        {

            boolean flag = false;
            for (int i = 2; i <= sum / 2; ++i) {
                // condition for nonprime number
                if (sum % i == 0) {
                    flag = true;
                    break;
                }
            }

            if (!flag || (sum%5==0)){
                System.out.print(0 + " ");
            }           else
            {
                System.out.print(sum + " ");
            }

            a = b;  // swap elements
            b = sum;
            sum = a + b;  // next term is the sum of the last two terms 
            n--;
        }
    }
}