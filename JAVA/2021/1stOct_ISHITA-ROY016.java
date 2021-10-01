/*Fibonacci Series with a Twist
Add following functionalities to it :

Take input the value of 'n', upto which you will print.
-Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.
Sample Input :
12
27

Sample Output :
1 1 0 0 0 8 0 21 34 0 0 144
1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418
*/
import java.util.*;
class ModifiedFibonacciSeries{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 1 ; i <= n ; i++){
            if(PrimeCheck(fibonacci(i))){
                System.out.print("0 ");
            }    
            else if(fibonacci(i)%5 == 0){
                System.out.print("0 ");
            }    
            else{
                System.out.print(fibonacci(i)+" ");
            }    
        }
    }

    static boolean PrimeCheck(int n){
        if(n==0 || n==1)
            return false;
        for(int i = 2 ; i <= n/2 ; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
    static int fibonacci(int n){
        if (n <= 1){
            return n;
        }    
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
     
}
