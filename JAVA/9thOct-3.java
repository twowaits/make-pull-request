import java.util.*;

class GcdFact{

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        long a=sc.nextLong();
        long b=sc.nextLong();

        //For a<b the Gcd of fact(a) and fact(b) will always be equal to fact(a)..

        if(a<b){
            System.out.println("The GCD of the Factorial of "+a+" and "+b+" is :" +factorial(a));
        }else{
            System.out.println("The GCD of the Factorial of "+a+" and "+b+" is :" +factorial(b));
        }

        //For Confimation we could check it here.

        // System.out.println( "The GCD of the Factorial of "+a+" and "+b+" is :" + gcd( factorial(a) , factorial(b) ));
    }

    private static long gcd(long a, long b) {
        return b==0?a:gcd(b,a%b);
    }

    private static long factorial(long n) {
        long fact=1l;
        for(long i=n;i>=1;i--){
            fact=fact*i;
            if(fact <= 0){
                return 0;
            }
        }
        return fact;
    }

}