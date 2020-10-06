
import java.util.Scanner;

public class Fibo {
    
    public static void main(String[] args){
    
    int n,a=1,b=1,sum,x=0;
    
        Scanner sc = new Scanner(System.in); 
        System.out.print("Enter the number of terms : ");
        n= sc.nextInt();
       
       if(n==1)
         System.out.print(" "+a);
     else if(n==2)
        System.out.print(a+" "+b);
    else {
       System.out.print(" "+a);
       System.out.print(" "+b);
     for(int i=3;i<=n;i++){
        sum=a+b;
        for(int j=1;j<=sum;j++){
        
        if(sum%j==0)
          x++;
    }
       if(x==2 || sum%5==0)
        System.out.print("0 ");
      else
         System.out.print(sum+" ");
      a=b;
      b=sum;
      x=0;
     }     
    }
  }
}
