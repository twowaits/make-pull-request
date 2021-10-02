import java.util.Scanner;

public class Oct1st_Aniket979Kanodia {
    public static boolean checkPrime(int val){
        if (val <= 1)
            return false;
        if (val <= 3)
            return true;
        for(long i =2;i<= Math.sqrt(val);i++){
            if(val%i == 0){
                return false;
            }
        }
        return true;
    }
    public static void fib(int n){
        int num1=0;
        int num2=1;
        System.out.print(num1+ " "+ num2 + " ");
        for(int i=0;i<n-2;i++){
            int num3 = num1+num2;
            if(num3%5==0 || checkPrime(num3)){
                System.out.print("0 ");
            }
            else{
                System.out.print(num3 + " ");
            }
            num1=num2;
            num2=num3;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        fib(n);

    }
}
