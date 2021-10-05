import java.util.*;
public class Main {
    static void FibonacciNumbers(int n)
    {
        int f1 = 1, f2 = 1, i;
 
        if (n < 1)
            return;
        System.out.print(f1 + " ");
        for (i = 1; i < n; i++){
            if(f2 % 5 == 0){
                System.out.print(0 + " ");
            }
            else{
                System.out.print(f2 + " ");
            }
            
            int sum = f1 + f2;
            f1 = f2;
            f2 = sum;
        }
    }
 
    // Driver Code
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        while(true){
            int n = sc.nextInt();
            FibonacciNumbers(n);
            System.out.println("");
        }
        
    }
}