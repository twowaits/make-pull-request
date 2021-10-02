
import java.util.Scanner;

public class Main {
//main method
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printFibo(n);
    }

//printing function
    public static void printFibo(int n){

        int a = 1, b = 1,c;
        System.out.print(a + " " + b);

        while(n > 2){
            c = a + b;
            a = b;
            b = c;

            if(isPrime(c) || c%5==0)
            {
                System.out.print(" " + 0 + " ");
            }
            else
                {
                System.out.print(" "+ c + " ");
            }

            n--;
        }

    }
//check for prime
    public static boolean isPrime(int num){
        for(int i=2; i*i<=num; i++){
            if(num % i == 0){
                return false;
            }
        }
        return true;
    }


}
