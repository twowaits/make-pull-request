

public class Main {

    public static int[] SortFunction(int[] arr)
    {
        int zero = 0;
        int one = 0;
        int two = arr.length-1;
        while(one <= two)
        {
            if(arr[one] == 0)
            {
                int temp =  arr[one];
                arr[one] = arr[zero];
                arr[zero] = temp;
                zero++;
                one++;
            }
            else if(arr[one] == 1)
            {
                one++;
            }
            else
            {
                int temp = arr[one];
                arr[one] = arr[two];
                arr[two] = temp;
                two--;
            }
        }
        return arr;
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
