import java.util.*;
public class fibonacci {
    int isprime(int a){
        int c=0;
        for(int i=1;i<=a;i++){
            if(a%i==0){
                c++;
            }
        }
        if(c==2)
            return 1;
        else
            return 0;
    }
    void cal(int n){
        int a=1,b=1;
        System.out.print(a+" "+b+" ");
        for(int i=2;i<n;i++){
            int d=a+b;
            if(isprime(d) == 1 || d%5 == 0){
                System.out.print(0+" ");
            }
            else{
                System.out.print(d+" ");
            }
            a=b;
            b=d;
        }
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        fibonacci ob=new fibonacci();
        ob.cal(n);
    }
}
