import java.util.*;

public class ZigZag {
    public static void main(String[] args) {
        Scanner bc = new Scanner(System.in);
        int row = bc.nextInt();
        int col = bc.nextInt();

        int[][] arr = new int[row][col];
        int c = 0;
        boolean flag = true;
        for (int j = 1; j <= col; j++) {
            arr[c][j - 1] = j;
            if (c == 0) {
                flag = false;
            }
            if (c == (row - 1)) {
                flag = true;
            }
            if (flag)
                --c;
            else
                ++c;
        }

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (arr[i][j] != 0)
                    System.out.print(arr[i][j]);
                else
                    System.out.print(" ");
            }
            System.out.println();
        }
    }
}
