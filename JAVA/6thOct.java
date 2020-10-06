/*package whatever //do not write package name here */

import java.io.*;
import java.lang.*;
import java.util.*;
public class Fibonacci {
   public static boolean prime(int n){
       if(n==1){
           return false;
       }
       boolean pr=true;
       for(int i=2;i<=n/2;i++){
           pr=true;
           if(n%i==0){
               pr=false;
               break;
           }
       }
       return pr;
   }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        while(t-->0){

        int n=in.nextInt();
        int t1 = 1, t2 = 1;
        for (int i = 1; i <= n; ++i)
        { 
            
          if(t1%5==0||prime(t1)){
            System.out.print(0 + " ");
            }
            else{
                System.out.print(t1 + " "); 
            }
            
            int sum = t1 + t2;
            t1 = t2;
            t2 = sum;
        }
        System.out.println();
        }
    }
}
