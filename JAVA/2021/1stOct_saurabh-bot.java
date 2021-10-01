import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        printFiboSeries(n);
    }
    private static void printFiboSeries(int n){
        
        if(n<1)
            return;
        if(n==1)
            System.out.println(1);
        else if(n==2)
            System.out.println(1 + " " + 1);
        else{
            int a = 1, b = 1;
            
            System.out.print(a + " " + b + " ");
            
            for(int i=2; i<n; i++){
                int c = a+b;
                if(c%5 == 0 || isPrime(c))
                    System.out.print(0 + " ");
                else
                    System.out.print(c + " ");
                a = b;
                b = c;
            }
            System.out.println();
        }
        
    }
    // for checking a number is prime or not
    private static boolean isPrime(int n){
        if (n <= 1)
            return false; 
        if (n <= 3)
            return true; 
        if (n % 2 == 0 || n % 3 == 0)
            return false; 
        for (int i = 5; i * i <= n; i = i + 6) 
            if (n % i == 0 || n % (i + 2) == 0) 
                return false; 
        return true; 
    }
}