import java.util.Scanner;
import java.lang.Math;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int input;
        input = in.nextInt();
        long n1=0,n2=1,n3;
        System.out.print(n1 + " " + n2 + " ");
        for (int i = 2; i <input; i++) {
            n3 = n1 + n2;
            if (n3 % 5 == 0 || primeCheck(n3)) {
                System.out.print("0 ");
            }else{
                System.out.print(n3 + " ");
            }
            n2 = n1;
            n3 = n2;
        }
    }

    static boolean primeCheck(long n) {
        for (int i = 2; i < Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}
