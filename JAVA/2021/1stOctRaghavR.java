/*
    Author: Raghav Rastogi
    Date: 01/10/2021
 */

package com.company;
import java.util.Scanner;

public class Solution {

  public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Fibonacci(n);
    }

  
  //function to fibonacci number sequence 
  public static void Fibonacci(int n){
        int a = 1, b = 1,c;
        System.out.print(a + " " + b);

        n-=2; 
        while(n-- > 0){
            c = a + b;
            a = b;
            b = c;

            //special condition to check while printing
            if(isPrime(c) || isMultipleOfFive(c)){
                System.out.print(" " + 0 + " ");
            }else{
                System.out.print(" "+ c + " ");
            }
        }
    }
    public static boolean isPrime(int num){
        for(int i=2; i*i<=num; i++){
            if(num % i == 0){
                return false;
            }
        }
        return true;
    }
    public static boolean isMultipleOfFive(int num){
        return (num % 5 == 0);
    }
}
