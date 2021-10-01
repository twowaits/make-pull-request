import java.util.Scanner;

public class CodeLord09Fibo {

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int N;
		N = sc.nextInt();
		sc.close();
		
		int fibo[] = new int[N+1];
		fibo[0] = 0;
		fibo[1] = 1;
		for(int i = 2 ; i <= N ; i++) {
			fibo[i] = fibo[i-1] + fibo[i-2];
		}
		for(int i = 0 ;  i <= N ; i++) {
			if(isprime(fibo[i]) || fibo[i] % 5 == 0) {
				fibo[i] = 0;
			}
		}
		
		for(int i = 1 ; i <= N ; i++) {
			System.out.print(fibo[i] + " ");
		}
		System.out.println();
	}

	private static boolean isprime(int N) {
		if(N == 0 || N == 1) {
			return false;
		}
		for(int i = 2 ; i*i <= N ; i++) {
			if(N % i == 0) {
				return false;
			}
		}
		return true;
	}

}
