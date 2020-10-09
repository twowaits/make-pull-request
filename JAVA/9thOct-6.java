
import java.util.Scanner;

public class EuclideanTheorem {
    public static int GCD(int a, int b){
        return (a == 0 || b == 0) ? (a + b) : (GCD(b, a % b));

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 2 numbers: ");
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();
        System.out.println(GCD(n1, n2));
    }
}
