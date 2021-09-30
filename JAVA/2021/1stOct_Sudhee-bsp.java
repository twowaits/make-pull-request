import java.util.Scanner;
 
public class Fibonacci {
	public static void main(String args[]) {
		
		System.out.println("Enter the term to be printed");
		Scanner ob = new Scanner(System.in);
		int ch = ob.nextInt();
		System.out.println("The" + ch + " terms of fibanocci numbers are-");
		int a, b, s, n;
		a = b = 1;
		for (n = 1; n <= ch; n++) {
			if(a%5==0) {
				System.out.print("0 ");
				s = a + b;
				a = b;
				b = s;
				continue;
			} else if(a==1) {
				System.out.print(a+" ");
				s = a + b;
				a = b;
				b = s;
				continue;
			}
			else {
				int temp;
				boolean isPrime=true;
				for(int i=2;i<=a/2;i++)
				{
		           temp=a%i;
				   if(temp==0)
				   {
				      isPrime=false;
				      break;
				   }
				}
				
				if(isPrime) {
					System.out.print("0 ");
					s = a + b;
					a = b;
					b = s;
					continue;
				}
				else {
					System.out.print(a+" ");
					s = a + b;
					a = b;
					b = s;
				}
			}
		}
	}
}