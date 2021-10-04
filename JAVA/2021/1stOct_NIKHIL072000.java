import java.util.Scanner;

public class fibonacci {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in); 
			int n = scn.nextInt();
			
			for(int i = 0; i <= n; i++) {
				if(isPrime(fib(i)) || fib(i) % 5 == 0 ) {
					System.out.print("0 ");
				}else {
					System.out.print(fib(i) + " ");
				}
			}
	}
	
	static boolean isPrime(int n) {
		if(n <= 1) 
			return false;
		
		for(int i = 2; i< n; i++) {
			if(n % i == 0) {
				return false;
			}
		}
		return true;
	}
	
	static int fib(int n) {
		if(n <= 1) 
			return n;
		
		return fib(n-1)+ fib(n-2);
	}
}