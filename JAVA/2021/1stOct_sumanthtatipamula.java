import java.util.Arrays;
import java.util.Scanner;

public class FibonacciTwistSeries {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        printFibonacciTwistSeries(num);
    }

    private static void printFibonacciTwistSeries(int num) {
        int[] series = new int[num];
        if (num == 1) {
            series[0] = 1;
        } else {
            int a = 1;
            int b = 1;
            series[0] = series[1] = 1;
            int j = 2;
            while (num-- > 2) {
                int c = a + b;
                if (c % 5 == 0 || isPrime(c)) {
                    series[j++] = 0;
                } else {
                    series[j++] = c;
                }
                a = b;
                b = c;
            }
        }
        System.out.println(Arrays.toString(series));
    }

    private static boolean isPrime(int num) {
        if (num == 2) {
            return true;
        } else if (num % 2 == 0) {
            return false;
        }
        for (int i = 3; i <= Math.sqrt(num); i += 2) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}
