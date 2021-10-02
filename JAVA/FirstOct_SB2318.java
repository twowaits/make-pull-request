import java.util.*;

public class FirstOct_SB2318 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
      int n;
      Scanner sc= new Scanner(System.in);
      System.out.println("Enter the value of n:");
      n= sc.nextInt();
      printFib(n);
      sc.close();
	}

	private static void printFib(int n) {
		
		// TODO Auto-generated method stub
		int n1=1, n2=0, n3;
		
		for(int i=1; i<=n; i++) {
			n3=n1+n2;
			n1=n2;
			n2=n3;
			
			if( n3>1 && (isPrime(n3)||n3%5==0))
			    System.out.print(0+" ");
			
			else
				System.out.print(n3+" ");
		}
		
		System.out.println();
			
	}

	private static boolean isPrime(int n3) {
		
		for(int i=2; i<n3; i++) {
			
			if(n3%i==0)
				return false;
		}
		
		return true;
	}

}
