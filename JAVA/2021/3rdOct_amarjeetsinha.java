import java.util.Scanner;
public class Main {
    //rename the file to "Main.java" to run

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int r = input.nextInt();
        int c  = input.nextInt();

        if(r == 1){
            for (int p = 1; p <= c; p++) {
                System.out.print(p + " ");
            }
            System.out.println();
            return;
        }
        for (int p = 1; p <= r ;p++) {
            for (int q = 1; q <= c; q++) {
                String val = String.valueOf(q);

                int m;
                if(q < r) m = 0;
                else m = (q - 1-r) / (2 * r - 2) + 1;
                if(Math.abs(q - (1 + m * (2 * r - 2))) == p -1){
                    System.out.print(val);
                }
                else{
                    for (int n = 0; n < val.length(); n++) {
                        System.out.print(" ");
                    }
                }
            }
            System.out.println();
        }
    }
    //Complexity=O(n^2);
} 
