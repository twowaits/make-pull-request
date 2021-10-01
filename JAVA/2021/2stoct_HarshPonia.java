import java.util.Scanner;

class feb {
    int f, s, a, b;

    feb() {
        s = 0;
        a = 0;
        b = 1;
    }
    public void series(int n) {
        System.out.print(a + " " + b + " ");
        for (int i = 0; i < (n - 2); i++) {
            int c = a + b;
                if (c % 5 == 0 || c==2)
                    System.out.print(0 + " ");
                else
                    System.out.print(c + " ");
                a = b;
                b = c;

            }
        }
    }
public class FibonacciSeriesWithWist {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number upto which you want to print Fibonacci Series");
        int n= sc.nextInt();
        feb f = new feb();
        f.series(n);
    }
}
