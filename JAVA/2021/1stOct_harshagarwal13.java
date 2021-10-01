import java.lang.*;
import java.util.Scanner;
class my {
	static int isPrime(int n){
		if(n==2){
			return 0;
		}
		else if(n%5==0)
			return 0;
		else if(n%2 == 0)
			return n;
		else if(n%2 != 0){
			for(int i=2;i<n;i++){
				if(n%i == 0)
					return n;
			}
		}
		return 0;
	}
	public static void main(String[] args) {
		Scanner myObj = new Scanner(System.in);
			int n = myObj.nextInt();
			int a=1;
			int b=1;
			int c=0;
			if(n==0){
				System.out.print("0");
			}
			else if(n==1){
				System.out.print("1");
			}
			else if(n==2){
				System.out.print("1 1");
			}
		else{
			int i=3;
			System.out.print(a+" ");
			System.out.print(b+" ");
			while(i<=n){
				c=a+b;
				System.out.print(isPrime(c)+" ");;
				a=b;
				b=c;
				i++;
			}
		}
		myObj.close();
	}
}
