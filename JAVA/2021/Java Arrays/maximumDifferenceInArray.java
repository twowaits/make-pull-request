import java.util.Scanner;
public class maximumDifferenceInArray {
    public static void main(String[] args) {
        Scanner cc=new Scanner(System.in);
        int s;
        System.out.println("The array size are:");
        s=cc.nextInt();
        int []arr=new int[s];
        System.out.println("The array element,s are:");
        for(int i=0;i<s;i++)
        {
            arr[i]= cc.nextInt();
        }
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<s;j++)
            {
                if(arr[i]>arr[j])
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        int dif=arr[0]-arr[s-1];
        System.out.println("the maximum differnece in array is:\n"+dif);
    }

}
