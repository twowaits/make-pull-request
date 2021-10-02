import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	
	System.out.println("Enter input number");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        if(n <= 0)
            return;

        if(n == 1) {
            System.out.println("1");
            return;
        }

        int a = 1,b = 1;
        System.out.print(a + " " + b + " ");
        for(int i=0; i<n-2; i++) {
            int c = a + b;
            boolean flag = true;

            for (int j = 2; j * j <= c; j++) {
                if (c % j == 0) {
                    flag = false;
                    break;
                }
            }
            a = b;
            b = c;

            if (flag || c % 5 == 0)
                System.out.print("0 ");
            else
                System.out.print(c + " ");
        }

    }

}
