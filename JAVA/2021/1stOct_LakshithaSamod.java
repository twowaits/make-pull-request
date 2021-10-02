import java.util.Scanner;

/**
 *
 * @author Lakshitha Samod
 */
public class Main {
    
     public static void main(String[] args) {
     
         //define variables
         int no, t1 = 1, t2 = 1, next = 0;
         
         //get input from user
        Scanner sc = new Scanner(System.in);     
        no = sc.nextInt();

        // print Fibonacci  numbers
        for (int i = 1; i < (no + 1); i++) {
            
            // print  first  term
            if (i == 1) {
                System.out.print(t1 + " ");
                continue;
            }
            
            // print second  term
            if (i == 2) {
                System.out.print(t2 + " ");
                continue;
            }
            
            next = t1 + t2;
            t1 = t2;
            t2 = next;

            if (isPrime(next) || isMulOfFive(next))
                System.out.print("0" + " ");
            else
                System.out.print(next + "  ");
        }
    }

     //check wheteher no is a prim e one
    public static boolean isPrime(int n) {
        if (n <= 1)
            return false;
  
        // Check from 2 to n-1
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;
  
        return true;
    }

      //check wheteher no is a multiple of 5
    public static boolean isMulOfFive(int x) {
        if (x % 5 == 0)
            return true;
        else
            return false;
    }
    
}
