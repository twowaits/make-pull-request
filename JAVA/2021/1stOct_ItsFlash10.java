import java.util.*;
public class code {
    public static Scanner scn = new Scanner(System.in);
    public static void main(String[] args){
        
        //taking input from the user
        int n = scn.nextInt();

        int[] res = new int[n];
        res = fibOutput(n);
        
        //printing the required series
        for (int i = 0; i < n; i++) 
        {
            System.out.print(res[i] + " ");            
        }
    }
    
    //function to check prime
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
    //function to get the series in an array
    public static int[] fibOutput(int n)
    {
        int a = 1;
        int b = 1;
        int res[] = new int[n];
        int idx = 0;

        for(int i= 0; i<n; i++){
            //checking if the number is divisible bt 5
            if(a % 5 == 0)
            {
                res[idx++] = 0;
            }
            //checking for prime
            else if(isPrime(a) == true)
            {
                res[idx++] = 0;
            }
            else
            {
                res[idx++] = a;
            }
            //continuing the series further
            int c = a+b;
            a = b;
            b= c;
        }

        return res;
    }
}
