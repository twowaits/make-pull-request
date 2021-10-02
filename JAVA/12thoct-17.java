import java.util.Scanner;
class arrange
{
    
    void Sort(int arr[])
    {
        int N=arr.length;
        int l=0,m=0,h=N-1;
        while(m<=h)
        {
            if(arr[m]==0)
            {
                int t=arr[l];
                arr[l]=arr[m];
                arr[m]=t;
                l++;
                m++;
            }
            else if(arr[m]==2)
            {
                int t=arr[m];
                arr[m]=arr[h];
                arr[h]=t;
                h--;
                m++;
            }
            else
            {
                m++;
            }
    }
}
 
    void printArray(int A[])
    {
        int n = A.length;
        for (int i=0; i<n; ++i)
            System.out.print(A[i] + " ");
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
        arrange obj = new arrange();
        obj.Sort(ar);
        System.out.println("Sorted array :");
        obj.printArray(ar);

    }
}

    
        