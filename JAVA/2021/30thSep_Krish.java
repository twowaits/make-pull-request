

public class Main {

    public static int[] SortFunction(int[] A)
    {
        int one = 0; 
    int two = 0;
    for(int i=0;i<A.length;i++){
        if(A[i]==0){
            A[i] = A[two];
            A[two] = A[one];
            A[one] = 0;
            one++;
            two++;
        }
        else if(A[i]==1){
            A[i] = A[two];
            A[two] = 1;
            two++;
        }
    }
        return A;
    }

    public static void main(String[] args) {
        int[] arr  = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};

        arr = SortFunction(arr);
        for(int ele: arr)
        {
            System.out.print(ele + " ");
        }


    }
}
