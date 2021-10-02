import java.util.Scanner;

public class Hack2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first number : ");
        int a = sc.nextInt();
        System.out.print("Enter the second number : ");
        int b = sc.nextInt();
        int i = 1;
        int[][] arr = new int[a][b];
        int row = -1;
        int column = 0;
        while (i < b+1) {
            if (row == 0||row==-1) {
                while (row != a-1) {
                    row++;
                    arr[row][column] = i;
                    column++;
                    i++;
                    if(i==b+1){
                        break;
                    }
                }
            } else {
                while (row != 0) {
                    row--;
                    arr[row][column] = i;
                    column++;
                    i++;
                    if(i==b+1){
                        break;
                    }
                }
            }
        }
        for (int j = 0; j < arr.length; j++) {
            for (int k = 0; k < arr[j].length; k++) {
                if(arr[j][k]!=0) {
                    System.out.print(arr[j][k]);
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println("");
        }
    }
}
