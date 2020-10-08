import java.util.Scanner;

 class Fibonaci{

    public static boolean isprime(int t){
        int flag=0;
        for(int i=2;i<=Math.sqrt(t);i++){

            if(t%i==0){
                flag=1;
            }
        }
        if(flag==0)
        return true;
        return false;
    }
    public static boolean isdivisible(int t){

        if(t%5==0)
        return true;
        return false;
    }

 public static void main(String[] args) {
    
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int a[]=new int[n];
    int b[]=new int[n];
    a[0]=1;
    a[1]=1;

    for(int i=2;i<n;i++){

        a[i]=a[i-1]+a[i-2];
    }
    b[0]=1;
    b[1]=1;
    for(int i=2;i<n;i++){

        if(isprime(a[i])|| isdivisible(a[i])){
            b[i]=0;
        }
        else{
            b[i]=a[i];
        }
    }
    for(int i=0;i<n;i++){
        System.out.print(b[i]+" ");
    }

}

}