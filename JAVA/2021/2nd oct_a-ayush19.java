import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int row = input.nextInt();

        int column = input.nextInt();

        for (int i = 0; i < row; i++) {
            StringBuilder strBuild = new StringBuilder();

            strBuild.append(new String(new char[i]).replace('\0', ' '));

            int index = i;
            boolean up = i == row - 1;

            while(index < column) {
                strBuild.append(index+1);

                int gapIndents;

                if (up) {
                    gapIndents = 2 * i - 1;
                }
                else {
                    int j = row - i - 1;
                    gapIndents = 2 * j - 1;
                }

                strBuild.append(new String(new char[gapIndents]).replace('\0', ' '));

                index += gapIndents + 1;

                if (i == 0) {
                    up = false;
                }
                else if (i == row - 1) {
                    up = true;
                }
                else {
                    up = !up;
                }
            }

            System.out.println(strBuild.toString());
        }
    }
}