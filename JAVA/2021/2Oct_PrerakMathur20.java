import java.util.Scanner;
public class Main {
    //rename the file to "Main.java" to run

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int row = input.nextInt();
        int col  = input.nextInt();

        if(row == 1){
            for (int i = 1; i <= col; i++) {
                System.out.print(i + " ");
            }
            System.out.println();
            return;
        }
        for (int i = 1; i <= row ;i++) {
            for (int j = 1; j <= col; j++) {
                String x = String.valueOf(j);

                int k;
                if(j < row) k = 0;
                else k = (j - 1-row) / (2 * row - 2) + 1;
                if(Math.abs(j - (1 + k * (2 * row - 2))) == i -1){
                    System.out.print(x);
                }
                else{
                    for (int l = 0; l < x.length(); l++) {
                        System.out.print(" ");
                    }
                }
            }
            System.out.println();
        }
    }
}