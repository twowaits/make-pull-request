import java.util.*;

class Main {
    public static boolean isPrimeOrMulFive(long n) {
        if (n < 2)
            return false;
        else if (n % 5 == 0) {
            return true;
        } else {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    return false;
                }
            }
            return true;
        }
    }

    public static void main(String[] args) {
        long a = 0, b = 1, c = 1;
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        System.out.print(1 + " ");
        for (int i = 0; i < n - 1; i++) {
            System.out.print((isPrimeOrMulFive(c) ? 0 : c) + " ");
            a = b;
            b = c;
            c = a + b;
        }
    }
}
