import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        // System.out.println("Hello world!");
        Scanner input = new Scanner(System.in);
        int n, t1 = 0, t2 = 1, nextTerm = 0;

        n = input.nextInt();
        ;

        for (int i = 1; i <= (n + 1); ++i) {
            // Prints the first two terms.
            if (i == 1) {
                System.out.println(t1 + ", ");
                continue;
            }
            if (i == 2) {
                System.out.println(t2 + ", ");
                continue;
            }
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;

            // cout << nextTerm << ", ";
            // cout<<ifprime(nextTerm);
            if (ifprime(nextTerm) || mul(nextTerm))
                System.out.println("0" + ",");
            else
                System.out.println(nextTerm + ", ");

        }
    }

    public static boolean ifprime(int n) {
        int i;
        boolean isPrime = true;
        if (n == 0 || n == 1) {
            isPrime = false;
        } else {
            for (i = 2; i <= n / 2; ++i) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        return isPrime;
    }

    public static boolean mul(int n) {
        if (n % 5 == 0)
            return true;
        else
            return false;
    }
}