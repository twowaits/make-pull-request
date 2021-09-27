For Hacktoberfest 20221.
import java.util.Scanner;

public class Decimal_To_Binary {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number you want to convert= ");
        int n=sc.nextInt();
        for(int i = 0; i <= n; i++ ) {
            System.out.print(Integer.toBinaryString(i)+" ");
        }
    }
}
