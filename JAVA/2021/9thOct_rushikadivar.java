import java.util.Scanner;

class GCD_factorial {

    public static int factorial(int number) {
        if (number <= 1) return 1;
        int tmp = 2;
        for (int i = 3; i <= number; i++)
            tmp *= i;
        return tmp;
    }

    public static int gcd(int n1, int n2) {
        int min = n1 < n2 ? n1 : n2;
        return factorial(min);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print(gcd(sc.nextInt(), sc.nextInt()));
        sc.close();
    }
}