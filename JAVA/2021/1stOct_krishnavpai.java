/*
* Printing fibonacci series till a certain number of terms
* And replacing Prime and multiples of 5 by 0 in the series
* Author  Krishna Pai
* Date    1-Oct-2021 
*/

import java.util.Scanner;

public class Fibonacci_condition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int term1 = 1, term2 = 1,term3;
        System.out.print(term1 + " " + term2);

        num-= 2;  // first 2 terms are 1 , 1
        while(num > 0){
            term3 = term1 + term2;
            term1 = term2;
            term2 = term3;

            //replacing prime Numbers and multiples of 5 by 0 in the series
            if(isItPrime(term3) || term3%5==0)
                System.out.print(" 0");
            else{
                System.out.print(" "+ term3);
            }
            num--;
        }

    }

    static boolean isItPrime(int num){
        if (num <= 1) {
            return false;
        }
        //O(sqrt n)
        for (int i = 2; i < Math.sqrt(num); i++){
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}