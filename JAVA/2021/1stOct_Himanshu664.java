package fibo;
import java.util.Scanner;

public class Fibonacci{

	//function for fibonacci number 
	public static void printfibonacci(int n){

		//First two terms of Fibonacci series
		int a = 1;
		int b = 1;
		int c;
		System.out.print(a + " " + b);
		n = n - 2; 
		while(n > 0){
			c = a + b;
			a = b;
			b = c;
			if(isPrimeNo(c) || isMultipleOfFive(c)){
				System.out.print(" " + 0 + " ");
			}else{
				System.out.print(" "+ c + " ");
			}
			n--;
		}
	}

	//function to check prime number
	public static boolean isPrimeNo(int num){
		for(int i=2; i*i<=num; i++){
			if(num % i == 0){
				return false;
			}
		}
		return true;
	}
	
	//function to check multiple of 5
	public static boolean isMultipleOfFive(int num){
		if(num % 5 == 0){
			return true;
		}
		return false;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		printfibonacci(n);
	}
}
