//Fibonacci Series with a Twist (Java)

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printFibo(n);
    }

  
  //function for printing fibonacci number
  public static void printFibo(int n){

        //First two terms of Fibonacci series
        int num1 = 1, num2 = 1,num3;
    //Corner cases
        if ( n <= 0 )
        return;
        else if ( n == 1)
        {
            System.out.print(num1);
            return;
        }
        else
        System.out.print(num1 + " " + num2);

        n = n - 2;  //first two terms already known
        while(n > 0){
            num3 = num1 + num2;
          //Changing the values for next iteration
            num1 = num2;
            num2 = num3;

            //Check condition check while printing
            if(isPrime(num3) || isMultipleOfFive(num3)){
                System.out.print(" " + 0 + " ");
            }else{
                System.out.print(" "+ num3 + " ");
            }

            n--;
        }

    }
    
    //function to check prime number
    public static boolean isPrime(int num){
        for(int i=2; i*i<=num; i++){
            if(num % i == 0){
                return false;
            }
        }
        return true;
    }

    
    //function to check multiple of 5
    public static boolean isMultipleOfFive(int num){
        if(num % 5 == 0){
            return true;
        }
        return false;
    }
}
