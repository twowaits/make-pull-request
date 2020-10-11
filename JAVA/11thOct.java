import java.util.Scanner;

class FibonacciSeries{

    static void printFibonacciSeries(int n){
        // n is the number to generate fibonacci series upto nth term

        int num1 = 1, num2 = 1;
        System.out.print("Fibonacci Series of "+n+" numbers: ");

        for (int i = 1; i <= n; ++i)
        {
            System.out.print(num1+" ");

            int sumOfPrevTwo = num1 + num2;
            num1 = num2;
            num2 = sumOfPrevTwo;
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter no. of rows to be printed: ");
        int n = sc.nextInt();

        int[] inputs = new int[n];          
        for(int i=0; i<inputs.length; i++){
            System.out.print("Enter Number "+ (i+1) +": ");
            inputs[i] = sc.nextInt();
        }
        for(int i=0; i<inputs.length; i++){
            printFibonacciSeries(inputs[i]);
            System.out.println();
        }
    }
}