import java.util.Scanner;

public class C1stOct_priyanshuborole {
    static int a = 0,b = 1, c;
    static void fibonacci(int n){
        if (n>=1){
            int temp = 0;
            c = a+b;
            if (c%5==0) System.out.print("0 ");
            else {
                for (int p = 2; p < c/2; p++) {
                    if (c % p == 0) {
                        System.out.print(c+" ");
                        temp = 1;
                        break;
                    }
                }
                if (temp == 0) System.out.print("0 ");
            }
            a=b;
            b=c;
            fibonacci(n-1);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a number: ");
        int num = sc.nextInt() - 2; //here we are subtracting 2 because we have already printing first 2 fibonacci series number.
        System.out.print(a+" "+b+" ");
        fibonacci(num);
    }
}
