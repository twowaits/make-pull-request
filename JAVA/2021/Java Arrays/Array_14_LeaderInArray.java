import java.util.Scanner;
public class Array_14_LeaderInArray {
    public static void main(String[] args) {
        Scanner cc = new Scanner(System.in);
        int k = 3;
        while (k != 0) {
            System.out.println("Finding Leader in a Array!");
            System.out.println("The array size is:");
            int s = cc.nextInt();
            int[] arr = new int[s];
            System.out.println("The array elements are:");
            for (int i = 0; i < s; i++) {
                arr[i] = cc.nextInt();
            }
            System.out.println("The Leaders are:\n");
            for (int i = 0; i < s; i++) {
                int largest = arr[i];
                for (int j = i; j < s; j++) {
                    if (arr[j] > largest) {
                        largest = arr[j];
                    }
                }
                if (arr[i] == largest) {
                    System.out.println(arr[i]);
                }
            }

            System.out.println("do you want's to check another Array element\n if yes press any number except zero(0)");
            System.out.println("you have entered:");
            k = cc.nextInt();
            if (k != 0) {
                System.out.println("Yes, why not!");
            } else {
                System.out.println("no thanks");
            }
        }
    }
}
