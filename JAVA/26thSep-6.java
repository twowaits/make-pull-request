import java.util.Scanner;

public class AllBinary{
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();

        // print all binary from n to 1
        while (n!=0) {
            System.out.print(Integer.toBinaryString(n)+" ");
            n--;
        }

        scn.close();
    }
}
