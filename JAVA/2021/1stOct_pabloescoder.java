import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;  // Used to input the range
        n = in.nextInt();
        boolean isSatisfyingCondition = false;
        long num1 = 1, num2 = 1, sum;
        System.out.print(num1 + " " + num2 + " ");
        for (int i = 3; i <= n; i++) {
            isSatisfyingCondition = false;
            sum = num1 + num2;
            if (sum % 5 == 0 || isPrime(sum)) {
                System.out.print("0 ");
                isSatisfyingCondition = true;
            }
            if (!isSatisfyingCondition) {
                System.out.print(sum + " ");
            }
            num1 = num2;
            num2 = sum;
        }
    }

    static boolean isPrime(long n) {
        for (int i = 2; i < Math.sqrt(n); i++) {
            if (n <= 1) {
                return false;
            }
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}