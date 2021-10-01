package java_class;
import java.util.*;
public  class demo{
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

        int n1 = 1, n2 = 1;
        
        
        System.out.print(n1+" "+n2+" ");

        for (int i = 2; i < n; i++)
        {
            
            int s = n1+n2;
            if (s%5==0) System.out.print(0+ " ");
            else if(checkprime(s))System.out.print(0+" ");
            else  System.out.print(s+" ");
            n1 = n2;
            n2 = s;
        }
            
    }
}
