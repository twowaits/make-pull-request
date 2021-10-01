//Code by Subham Sourav Brahma
import java.util.Scanner;

class fibo{
    static boolean isPrime(long ele){
        for(long i=2;i*i<ele;i++){
            if(ele%i==0){
                return false;
            }
        }
        return true;
    }
    
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        long n = sc.nextInt();//Taking value n as input
        long a,b;
        a=b=1l;
        System.out.print("1 1 ");
        for(int i=2;i<n;i++){
            long c = a+b;
            if(c%5==0){
                System.out.print("0 ");
            }
            else if(isPrime(c)){
                System.out.print("0 ");
            }
            else{
                System.out.print(c+" ");
            }
            a=b;
            b=c;
        }
        sc.close();
    }
}
