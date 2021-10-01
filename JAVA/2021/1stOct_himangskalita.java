
import java.util.*;
public class Oct_himangsKalita {
    public static Scanner scn = new Scanner(System.in);
    public static void main(String[] args){
        
        int n = scn.nextInt();

        int[] res = new int[n];
        res = fibOutput(n);
        
        for (int i = 0; i < n; i++) 
        {
            System.out.print(res[i] + " ");            
        }
    }
    
    public static boolean isPrime(int a) {  
        if (a <= 1) {  
            return false;  
        }  
        for (int i = 2; i < Math.sqrt(a); i++) {  
            if (a % i == 0) {  
                return false;  
            }  
        }  
        return true;  
    }  
    public static int[] fibOutput(int n)
    {
        int a = 1;
        int b = 1;
        int res[] = new int[n];
        int idx = 0;

        for(int i= 0; i<n; i++){
            if(a % 5 == 0)
            {
                res[idx++] = 0;
            }
            else if(isPrime(a) == true)
            {
                res[idx++] = 0;
            }
            else
            {
                res[idx++] = a;
            }
            int c = a+b;
            a = b;
            b= c;
        }

        return res;
    }
}
