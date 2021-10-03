import java.util.Scanner;

class Fibonacci {
    //CHECK WHETHER THE FIBONACCI TERM IS PRIME OR NOT
    public static boolean isPrime(int n){
        if(n==2||n==3)return true;
        for(int i=2;i<=n/2;i++){
            if(n%i==0)return false;
        }
        return true;
    }
    
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int n;
        //SCANNING THE INPUT
        System.out.println("Enter Number of terms:");
        n=sc.nextInt();
        int fib1=1,fib2=1;
        if(n<=0)System.out.println("Invalid Input");
        if(n==1)System.out.println(1);
        if(n==2)System.out.println(1 +" "+ 1);
        //PRINT THE SERIES
        else{
            System.out.print(1 +" "+ 1+" ");
            for(int i=3;i<=n;i++){
                int fib3=fib1+fib2;
                if(fib3%5==0 || isPrime(fib3))System.out.print(0 +" ");
                else System.out.print(fib3 +" ");
                fib1=fib2;fib2=fib3;
            }
        }
    }
}
