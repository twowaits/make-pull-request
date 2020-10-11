import java.util.*;

class Fibonacci {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter range of fibonacci number: ");
        int range = scanner.nextInt();

        System.out.println(Arrays.toString(getFibonacci(range)).replaceAll("\\p{P}", ""));
    }

    private static int[] getFibonacci(int range) {
        int[] fibonnaci = new int[range];
        fibonnaci[0]=fibonnaci[1] = 1;

        for (var index = 2; index < range; index++) {
            fibonnaci[index] = fibonnaci[index - 1] + fibonnaci[index - 2];
        }

        return fibonnaci;
    }
}