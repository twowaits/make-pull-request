import java.util.Scanner;

public class Fibonacci {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        generateFibonacci(n);
    }

    private static void generateFibonacci(int n) {
        int a = 0, b = 1;
        System.out.print(a + " " + b);
        for (int i = 3; i <= n; i++) {
            int c = a + b;
            System.out.print(" " + c);
            a = b;
            b = c;
        }
    }
}
