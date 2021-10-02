import java.util.Scanner;

class fibonacci {
    static int fibo_series(int n) {
        int answer = 0;
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        }
        answer = fibo_series(n - 1) + fibo_series(n - 2);
        return answer;
    }

    public static void main(String[] args) {
        int answer = 0, count = 0;
        Scanner a = new Scanner(System.in);
        int n = a.nextInt();
        for (int i = 1; i <= n; i++) {
            count = 0;
            answer = fibo_series(i);
            if ((answer == 0) || (answer == 2)) {
                System.out.print("0 ");
                continue;
            } else if ((answer == 1)) {
                System.out.print("1 ");
                continue;
            } else {
                for (int j = 2; j <= (answer - 1); j++) {
                    if ((answer % j == 0)) {
                        if (answer % 5 == 0) {
                            System.out.print("0 ");
                            count = 1;
                            break;
                        }
                        System.out.print(answer + " ");
                        count = 1;
                        break;
                    }
                }
                if (count == 0)
                    System.out.print("0 ");
            }
        }
        a.close();
    }
}
