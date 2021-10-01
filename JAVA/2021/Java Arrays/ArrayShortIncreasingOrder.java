
import java.util.Arrays;
import java.util.Scanner;

class Bubblesort {
    Bubblesort(double arr[]) {

        boolean sort = true;
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - 1 - i; j++) {
                if (arr[j + 1] < arr[j]) {

                    double temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                    sort = false;
                }
            }
            if (sort)
                break;
        }
        System.out.println("After Bubble short the Assending Array is");
        for (double d : arr) {
            System.out.println(d);
        }

    }
}

class SelectionShort {
    SelectionShort(double array[]) {
        for (int i = 0; i < array.length - 1; i++) {
            int minIndex = i;
            for (int j = i; j < array.length; j++) {
                if (array[j] < array[minIndex]) {
                    minIndex = j;
                }
            }
            Double temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
        System.out.println("After Selection Short the Assending Array is :");
        for (double d : array) {
            System.out.println(d);
        }
    }
}

public class ArrayShortIncreasingOrder {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Size of Array");
        int size = sc.nextInt();
        double[] arr = new double[size];
        System.out.println("Element");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextDouble();
        }
        System.out.println("The Array is:");
        System.out.println(Arrays.toString(arr));
        System.out.print("input : [1] for Bubble Sort else Selection Short");
        int e = sc.nextInt();
        sc.close();
        if (e == 1) {
            Bubblesort obj = new Bubblesort(arr);
        } else {
            SelectionShort obj = new SelectionShort(arr);
        }

    }
}
