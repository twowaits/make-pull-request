import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int r = in.nextInt();
        int c = in.nextInt();

        printZigZag(r, c);

        in.close();

    }

    public static void printZigZag(int r, int c) {
        int flag = 1;
        for (int j = 1; j <= c; j++) {
            if (j == flag) {
                System.out.print(flag);
                flag += (r - 1) * 2;
            } else
                System.out.print("  ");
        }
        System.out.println();

        for (int i = 2; i <= r - 1; i++) {
            flag = i;
            int flag2 = (r * 2) - i;
            for (int j = 1; j <= c; j++) {
                if (j == flag) {
                    System.out.print(flag);
                    flag += (r - 1) * 2;
                } else if (j == flag2) {
                    System.out.print(flag2);
                    flag2 += (r - 1) * 2;
                } else
                    System.out.print("  ");
            }
            System.out.println();
        }

        flag = r;
        for (int j = 1; j <= c; j++) {
            if (j == flag) {
                System.out.print(flag);
                flag += (r - 1) * 2;
            } else
                System.out.print("  ");
        }
    }
}
