import java.util.*;
class Fibonacci_Series {
    public static void main(String[] arsg) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter no. of Terms you want to print in fibonacci series:");
        int n = sc.nextInt();

        int prevTerm = 0;
        int currentTerm = 1;
        int nextTerm;
        Fibonacci_Series obj = new Fibonacci_Series();

        for (int i = 1; i <= n; i++) {

            if (currentTerm % 5 == 0)
                System.out.print(0 + " ");

            else if (obj.isPrime(currentTerm))
                System.out.print(0 + " ");

            else
                System.out.print(currentTerm + " ");

            nextTerm = prevTerm + currentTerm;
            prevTerm = currentTerm;
            currentTerm = nextTerm;
        }
    }

    boolean isPrime(int num){
        
        int flag=0;

        if(num==1 || num==0){
            return false;
        }
        else{
            for(int i=2; i<num/2; i++){
                
                if(num%i==0)
                    flag=1;     
            }
            if(flag==1)
                return false;
            else
                return true;
        }
    }
}
