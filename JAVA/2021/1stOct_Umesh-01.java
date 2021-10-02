import java.io.*;
import java.util.Scanner;

class MyClass {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		if (n == 1) {
		    System.out.println(1);
		} else if (n == 2) {
		    System.out.println("1 1");
		} else {
		    int a = 1;
		    int b = 1;
		    int c;
		    System.out.print("1 1 ");
		    for (int i = 3; i <= n; i++) {
		        c = a + b;
		        a = b;
		        b = c;
		        if (isPrime(c) || c % 5 == 0) {
		            System.out.print("0 ");
		        } else {
		            System.out.print(c + " ");
		        }
		    }
		}
	}

	private static boolean isPrime(int n) {
	    if (n == 1) {
	        return false;
	    }
	    for (int i = 2; i * i <= n; i++) {
	        if (n % i == 0) {
	            return false;
	        }
	    }
	    return true;
	}
}
