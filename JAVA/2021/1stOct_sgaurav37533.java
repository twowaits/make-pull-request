import java.util.*;

public class sgaurav37533 {
    public static void main(String arg[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a = 1, b = 1, c = 0;
        for (int i = 1; i <= n; i++) {
            if (prime(a) && (a % 5 != 0))
                System.out.print(a + " ");
            else
                System.out.print(0 + " ");
            c = a + b;
            a = b;
            b = c;
        }
    }

    public static boolean prime(int a) {
        if (a == 1)
            return true;
        else if (a == 2 || a == 3)
            return false;
        for (int i = 2; i < a / 2; i++) {
            if (a % i == 0)
                return true;
        }
        return false;
    }
}