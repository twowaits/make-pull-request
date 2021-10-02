// HacktoberFest 

/*
	Repository: TwoWaits/make-pull-request.

	question:

	Fibonacci Series with a Twist
Add following functionalities to it :

Take input the value of 'n', upto which you will print.
-Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.
Sample Input :
12
27

Sample Output :
1 1 0 0 0 8 0 21 34 0 0 144

1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418 

1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418 
*/


import java.util.*;

public class Main{

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		sc.close();
		
		long fibArray[] = new long[n + 2];
		fibArray[0] = 1;
		fibArray[1] = 1;

		for (int i = 2; i <= n; i++)
            fibArray[i] = fibArray[i - 1] + fibArray[i - 2];

  		for(int i = 0; i < n; i++){
            
  			if(isPrimeFiver(fibArray[i])){
            	fibArray[i] = 0;
            }
            System.out.print(fibArray[i] + " ");
  		}

	}


	// Function to check whether a number is a multiple of 5 or a prime.
	public static boolean isPrimeFiver(long x){
        
        if (x == 1){
			return false;
		}
        
		if (x%5 == 0){
			return true;
		}

		boolean flag = true;
		for (int i = 2; i <= Math.sqrt(x); i++) {
      		if (x % i == 0) {
        		flag = false;
        		break;
     		}
   		}
   		return flag;
	}
}