import java.util.Scanner; 
public class fibo {
    
    public static void main(String[] args){
    int n,a=1,b=1,c,x=0;
    Scanner sc = new Scanner(System.in); 
    n= sc.nextInt();
    if(n==1){System.out.print(""+a);}
    else if(n==2){System.out.print(""+b);}
    else {
    System.out.print(""+a);
    System.out.print(","+b);
    for(int i=3;i<=n;i++){
    c=a+b;
    for(int j=1;j<=c;j++){
    if(c%j==0){x++;}
    }
    if(x==2){    System.out.print(",0");}
    else if(c%5==0){    System.out.print(",0");}
    else {    System.out.print(","+c);}
    a=b;
    b=c;
    x=0;
    }
        
    }
    }
}
    
   
