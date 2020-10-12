import java.util.Scanner;
class bubble
{
    
    void bubbleSort(int arr[])
    {
        int n = arr.length;
        for (int i = 0; i < n-1; i++)
            for (int j = 0; j < n-i-1; j++)
                if (arr[j] > arr[j+1])
                {
                    // swap temp and arr[i]
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
    }
 
    /* Prints the array */
    void printArray(int arr[])
    {
        int n = arr.length;
        for (int i=0; i<n; ++i)
            System.out.print(arr[i] + " ");
        System.out.println();
    }
    public static void main()
    {   int p,m;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements in array");
        p=sc.nextInt();
        int ar[] = new int[p];
        for(m=0;m<p;m++)
        {
            System.out.println ("Enter an element :");
            ar[m] = sc.nextInt();
        }
        bubble obj = new bubble();
        obj.bubbleSort(ar);
        System.out.println("Sorted array :");
        obj.printArray(ar);

    }
}
    
        