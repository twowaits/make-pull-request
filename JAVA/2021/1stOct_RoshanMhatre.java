import java.util.Scanner;

public class TwistedPrime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int noOfTerms = sc.nextInt();

        int first = 1, second = 1;
        for (int i = 1; i <= noOfTerms; ++i) {
            if (isPrime(first) || isMultipleOfFive(first)) {
                System.out.print(0 + " ");
            } else {
                System.out.print(first + " ");
            }

            int third = first + second;
            first = second;
            second = third;
        }
    }

    private static boolean isPrime(int num) {
        if (num <= 1)
            return false;

        for (int i = 2; i <= Math.sqrt(num); ++i) {
            if ((num % i) == 0) {
                return false;
            }
        }
        return true;
    }

    private static boolean isMultipleOfFive(int num) {
        return num % 5 == 0;
    }
}
