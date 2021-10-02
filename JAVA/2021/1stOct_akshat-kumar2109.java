import java.util.Scanner;

public class Main {

    // Checks if a number is prime or not
    public static boolean isPrime(int n)
    {
        if (n <= 1) {
            return false;
        }

        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        // Take starting two fibonacci numbers
        int a = 1, b = 1;

        // If n == 1 then print "a" only
        if (n == 1) {
            System.out.println(a);
        } else if (n >= 2) {
            // Print them
            System.out.print(a + " " + b + " ");

            for (int i = 2; i < n; i++) {
                // Calculate new fibonacci number c
                int c = a + b;

                if (c % 5 == 0) {
                    System.out.print(0 + " ");
                } else if (isPrime(c)) {
                    System.out.print(0 + " ");
                } else {
                    System.out.print(c + " ");
                }

                a = b;
                b = c;
            }
        }
    }
}
