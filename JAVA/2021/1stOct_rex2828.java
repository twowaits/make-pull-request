import java.util.Scanner;

public class Main {
    static boolean isPrime(int n) {
        if (n <= 1)
            return false;

        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;

        return true;
    }

    public static void main(String[] args) {
        int n1 = 0, n2 = 1, n, n3;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        System.out.print(n2 + " ");
        for (int i = 1; i < n; i++) {
            n3 = n1 + n2;
            if (n3 % 5 == 0 || isPrime(n3))
                System.out.print(0 + " ");
            else
                System.out.print(n3 + " ");
            n1 = n2;
            n2 = n3;
        }
        System.out.println();
    }
}
