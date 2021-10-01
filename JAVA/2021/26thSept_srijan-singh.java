import java.util.Scanner;

public class MergeSort {

    public static void display(int arr[], int length)
    {
        for(int i=0; i<length; i++)
        {
            System.out.print(arr[i] + " ");
        }

        System.out.println("");
    }

    public static void merge(int arr[], int start, int mid, int end)
    {
        int length = end - start + 1;

        int temp[] = new int[length];

        int index = 0, left = start, right = mid+1;

        while(left<=mid && right<=end)
        {
            if(arr[left] <= arr[right])
            {
                temp[index++] = arr[left++];
            }
            else
            {
                temp[index++] = arr[right++];
            }
        }

        while(left<=mid)
        {
            temp[index++] = arr[left++];
        }

        while(right<=end)
        {
            temp[index++] = arr[right++];
        }

        for(int i=start; i<=end; i++)
        {
            arr[i] = temp[i-start];
        }
    }

    public static void mergeSort(int arr[], int start, int end)
    {
        if(start<end)
        {
            int mid = (start+end)/2;
            mergeSort(arr, start, mid);
            mergeSort(arr, mid+1, end);
            merge(arr, start, mid, end);
        }
    }

    public static void main(String arg[])
    {
        Scanner scan = new Scanner(System.in);
        
        System.out.print("Enter length of the Array: ");
        int length = scan.nextInt();
        int arr [] = new int [length];

        for(int i=0; i<length; i++)
        {
            System.out.print("Enter Element "+(i+1)+" : ");
            arr[i] = scan.nextInt();
        }
        scan.close();

        System.out.print("Given Array: ");
        display(arr, length);

        mergeSort(arr, 0, length-1);

        System.out.print("Sorted Array: ");
        display(arr, length);
    }
}
