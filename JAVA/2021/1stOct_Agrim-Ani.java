package java_class;
import java.util.*;
public  class firstOct_Agrim{
    public static boolean checkprime(int n){
        if(n<=1)return false;
        for(int i=2;i<n/2;++i){
            if(n%i==0){
                return false;
                
            }

        }
     return true;
    }
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        
        int n;
        n = in.nextInt();

        int x = 1, y = 1;
        
        
        System.out.print(x+" "+y+" ");

        for (int i = 2; i < n; i++)
        {
            
            int s = x+y;
            if (s%5==0) System.out.print(0+ " ");
            else if(checkprime(s))System.out.print(0+" ");
            else  System.out.print(s+" ");
            x = y;
            y = s;
        }
            
    }
}
