import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int row = sc.nextInt();

        int column = sc.nextInt();

        for (int i = 0; i < row; i++) {
            StringBuilder strBuild = new StringBuilder();

            strBuild.append(new String(new char[i]).replace('\0', ' '));

            int ind = i;
            boolean upd = i == row - 1;

            while(ind < column) {
                strBuild.append(ind+1);

                int gapInd;

                if (upd) {
                    gapInd = 2 * i - 1;
                }
                else {
                    int j = row - i - 1;
                    gapInd = 2 * j - 1;
                }

                strBuild.append(new String(new char[gapInd]).replace('\0', ' '));

                ind += gapInd + 1;

                if (i == 0) {
                    upd = false;
                }
                else if (i == row - 1) {
                    upd = true;
                }
                else {
                    upd = !upd;
                }
            }

            System.out.println(strBuild.toString());
        }
    }
} 
