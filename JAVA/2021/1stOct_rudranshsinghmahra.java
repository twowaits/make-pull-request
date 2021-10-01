import java.util.*;

public class fibonacciSeries {
    public static Scanner scanner = new Scanner(System.in);
    public static void main(String[] args){

        int n = scanner.nextInt();

        int[] number = new int[n];
        number = fibOutput(n);

        for (int i = 0; i < n; i++)
        {
            System.out.print(number[i] + " ");
        }
    }

    public static boolean Prime(int a) {
        if (a <= 1) {
            return false;
        }
        for (int i = 2; i < Math.sqrt(a); i++) {
            if (a % i == 0) {
                return false;
            }
        }
        return true;
    }
    public static int[] fibOutput(int n)
    {
        int a = 1;
        int b = 1;
        int number[] = new int[n];
        int index = 0;

        for(int i= 0; i<n; i++){
            if(a % 5 == 0)
            {
                number[index++] = 0;
            }
            //checking for prime
            else if(Prime(a))
            {
                number[index++] = 0;
            }
            else
            {
                number[index++] = a;
            }
            int c = a+b;
            a = b;
            b= c;
        }

        return number;
    }
}
