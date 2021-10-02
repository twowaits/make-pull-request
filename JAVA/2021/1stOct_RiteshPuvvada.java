import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int f1 = 1,f2=1,sum=0;
        System.out.print(f1+" "+f2);
        for(int i=2; i< n; i++)
        {
            int num = 0; 
            sum=f1+f2;  
            if(sum%5==0)
            {
                System.out.print(0+" ");
            }
            else
            {
                for (int j = 2; j < sum/2; j++) {
                    if (sum % j == 0) {
                        System.out.print(sum+" ");
                        num = 1;
                        break;
                    }
                }
                if(num == 0) {
                    System.out.print("0 ");
                }
            }
            f1=f2;
            f2=sum;
        }
    }
}
