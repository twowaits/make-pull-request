import java.util.Scanner;

public class FabonacciWithTwist {

        public static boolean prime(int t)
        {
            if (t <= 1){
                return false;
            }
            for (int i = 2; i < t; i++){
                if (t % i == 0){
                    return false;
                }
            }
            return true;
        }

        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            int a = 1;
            int b = 1;
            System.out.print(a + " " + b + " " );
            for(int i = 2 ;i < n ;i++)
            {
                int s = a + b ;
                if(s % 5 == 0){
                    System.out.print(0+" ");}
                else if(prime(s)){
                    System.out.print(0+" ");}
                else{
                    System.out.print(s+" ");}
                a=b;
                b=s;
            }
        }
    }
