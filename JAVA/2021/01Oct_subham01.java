import java.util.*;
class fiboTwist{
    public static void main(String arg[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        fib(n);
    }
    static void fib(int n){
        if(n==1)
        System.out.print("1");
        else if(n==2)
        System.out.print("1 1 ");
        else{
            System.out.print("1 1 ");
            int a=1,b=1;
            for(int i=3;i<=n;i++){
                int c=a+b;
                if(isPrime(c)||(i%5==0))
                System.out.print(0+" ");
                else
                System.out.print(c+" ");
                a=b;b=c;
            }
        }

    }
    static boolean isPrime(int n){
        if(n==2 || n==3)
        return true;
       for(int i=4;i<n;i++){
           if(n%i==0)
           return false;
       }
       return true;
    }
}