import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
        // int arr[] = {0, 1, 2, 0, 1, 2};
        int size = arr.length;

        System.out.print("Array Before Sorting.");
        for(int x : arr){
            System.out.print(x + " ");
        }
        

        System.out.print("Array After Sorting.");
        arr = array_sort(arr, arr_size);
        for(int x : arr){
            System.out.print(x + " ");
        }
    }

    public static int[] array_sort(int a[], int size)
    {
        int l = 0;
        int h = size - 1;
        int m = 0, temp = 0;
        while (m <= h) {
            if(a[m] == 0){
                temp = a[l];
                a[l] = a[m];
                a[m] = temp;
                l++;
                m++;
            }
            else if(a[m] == 1){
                m++;
            }
            else {
                temp = a[m];
                a[m] = a[h];
                a[h] = temp;
                h--;
            }
        }
        return a;
    }
}