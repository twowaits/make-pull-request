import java.util.*;

public class firstOct_addisonhardley {
    public static boolean isPrime(int x) {
        if (x == 1)
            return false;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0)
                return false;
        }
        return true;
    }

    public static void fibonacciWithTwist(int n) {
        int[] fib = new int[n];
        fib[0] = 1;
        System.out.print(fib[0] + " ");
        if (n <= 1) {
            return;
        }
        fib[1] = 1;
        System.out.print(fib[1] + " ");

        for (int i = 2; i < n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
            if (isPrime(fib[i]) || fib[i] % 5 == 0) {
                System.out.print("0 ");
            } else {
                System.out.print(fib[i] + " ");
            }
        }
    }

    public static void main(String[] args) {
        System.out.println("Enter number of terms:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        fibonacciWithTwist(n);
    }
}