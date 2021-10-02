import java.util.*;
class FibbonacciTwist
{
    static boolean isPrime(int n){
        for(int x=2;x<=n/2;x++){
            if(n%x==0){
                return false;
            }
        }
        return true;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.print("n=");
        int n=sc.nextInt();
        int a=1,b=1,c;
        System.out.print(a+" "+b+" ");
        for(int x=2;x<n;x++){
            c=a+b;
            a=b;
            b=c;
            if(c%5==0 || isPrime(c)){
                System.out.print(0+" ");
            }
            else {
                System.out.print(c+" ");
            }
            
        }
    }
}
