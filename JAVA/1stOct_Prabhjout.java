import java.io.*;
import java.util.*;
class TwistedFibonacci{
    public static void main(String args[])throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        //Read the number of terms from user
        int n = Integer.parseInt(br.readLine()); 
        StringBuilder sb = new StringBuilder();
        if(n==1)
        sb.append("1 ");
        if(n>=2)
        sb.append("1 1 ");
        int a=2,b=3,c;
        for(int i=3;i<=n;i++){
            if((a%5==0)||checkPrime(a)){
                sb.append("0 ");
            }
            else sb.append(a+" ");
            c=a+b;
            a=b;
            b=c;
            
        }
        System.out.println(sb);
    }
    public static  boolean checkPrime(int n){    //check Prime Function
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}