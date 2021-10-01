import java.util.Scanner;
public class incert_delete {
    public static void main(String[] args) {
        Scanner cc=new Scanner(System.in);
        System.out.println("the array size is:");
        int s= cc.nextInt();
        int[] arr =new int[s];
        System.out.println("the array elements are:\t");
        for(int i=0;i<arr.length;i++)
        {
            arr[i]= cc.nextInt();
        }
        System.out.println("which number do you wants to insert");
        int num1= cc.nextInt();
        System.out.println("in the position of ?");
        int inPos= cc.nextInt();
        arr[inPos-1]=num1;
        System.out.println("after inserting the updated array elements are:\n");
        for(int i=0;i<s;i++)
        {
            System.out.println(arr[i]);
        }

    }
}
