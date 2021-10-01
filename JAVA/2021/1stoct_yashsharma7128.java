/* twisted Fibonacci series*/
package com.company;
import java.util.Scanner;


public class Main {

    public static void main(String[] args) {
        System.out.println("enter the number n, till which series will be printed");
        Scanner sc = new Scanner(System.in);
        int total = sc.nextInt();
        int number1 = 1;
        int number2 = 1;
        int sum;



        System.out.print(number1);


        for(int i=1;i<total;i++){
            boolean flag = true;
            for (int j = 2; j <number2; j++) {
                // condition for nonprime number
                if (number2 % j == 0) {
                    flag = false;
                    break;

                }
            }
            if(number2%5==0 ||  flag && number2 !=1)
            {
                System.out.print(", "+0);
            }

            else if (!flag) {
                System.out.print(", " + number2);
            }

            else {
                System.out.print(", " + number2);
            }


            sum = number1 + number2;
            number1 = number2;
            number2 = sum;




        }
    }
}
