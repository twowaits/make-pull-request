import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n, n1 = 0, n2 = 1, n3 = 0;

        System.out.print("Enter the number of elements: ");
        n = input.nextInt();;

        if (n == 1)
            System.out.println(n2);
        for (int i = 1; i <= (n + 1); ++i) {

            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            if (isPrime(n3) || (n3 % 5 == 0))
                System.out.print("0" + " ");
            else
                System.out.print(n3 + " ");
        }
    }

    public static boolean isPrime(int n) {
        boolean ans = true;
        if (n == 0 || n == 1) {
            ans = false;
        } else {
            for (int i = 2; i <= n / 2; ++i) {
                if (n % i == 0) {
                    ans = false;
                    break;
                }
            }
        }
        return ans;
    }
}
