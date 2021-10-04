import java.util.*;

public class 2ndOct_priyanshuborole {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        sc.close();

        int[][] matrix = new int[a][b];
        boolean flag = true;

        int i = 0;
        for(int j = 0; j < b; j++){
            matrix[i][j] = j + 1;


            if(i == 0)
                flag = false;
            if(i == a-1)
                flag = true;


            if(flag)
                i--;
            else
                i++;
        }


        for (int k = 0; k < a; k++){
            for (int j = 0; j < b; j++){
                if(matrix[k][j] > 0)
                    System.out.print(matrix[k][j] + " ");
                else
                    System.out.print("  ");
            }
            System.out.println();
        }
    }
}
