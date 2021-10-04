import java.util.*;

public class HF {

    static void Fibonacci5(int N)
    {
        int num1 = 1, num2 = 1;
        System.out.print(num1 + " ");
        System.out.print(num2 + " ");

        int count = 0;

        while (count < N-2){
            int num3 = num2 + num1;
            num1 = num2;
            num2 = num3;
            count = count + 1;
            if(num3%2==1||num3%5==0||num3==2)
            System.out.print("0"+" ");
            else
            System.out.print(num3 + " ");
        }
    }

    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        Fibonacci5(n);
    }
}
