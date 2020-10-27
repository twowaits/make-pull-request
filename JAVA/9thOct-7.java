import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Factorial_GCD {

	long fact(long n) {
		long f=1;
		for (long i = n; i >= 2; i--) {
			f=f*i;
		}
		return f;
	}
	
	long solve(long a, long b) {
		long min=Math.min(a, b);
		return fact(min);
	}
	
	public static void main(String[] args) throws Exception {
		BufferedReader sc=new BufferedReader(new InputStreamReader(System.in));
		String[] s=sc.readLine().split(" ");
		long a=Long.parseLong(s[0]);
		long b=Long.parseLong(s[1]);
		Factorial_GCD ff=new Factorial_GCD();
		System.out.println(ff.solve(a, b));
	}
}
