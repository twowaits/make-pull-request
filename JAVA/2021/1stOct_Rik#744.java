import java.util.*;
class Fibonacci{  
public static void main(String args[])  
{   
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int a=0,b=1;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=2;j<b;j++){
          if(b%j==0){
              c++;
          }
        }
        if(b==1)
        c++;
         if(b%5==0)
         c=0;
        if(c!=0)
        System.out.print(b+" ");
        else
        System.out.print("0 ");
        int t=b;
        b=b+a;
        a=t;
    }
}
}2