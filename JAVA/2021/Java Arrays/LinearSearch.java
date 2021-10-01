import java.util.Scanner;
public class LinearSearch {
    public static void main(String[] args) {
        Scanner cc=new Scanner(System.in);
        System.out.println("the array size is:");
        int s= cc.nextInt();
        int []arr=new int[s];
        System.out.println("the array elements are:");
        for(int i=0;i<s;i++)
        {
            arr[i]= cc.nextInt();
        }
        System.out.println("the element we have to search in the array is:");
        int k=cc.nextInt();
        int c=0;
        for(int i=0;i<s;i++)
        {
            if(arr[i]==k)
            {
                c=i+1;
                System.out.println("the key element"+k+" is present in the array\n in the position of"+c);
            }
        }
        if(c==0)
        {
            System.out.println("the element is not present in the array");
        }
    }
}
