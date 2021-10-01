import java.util.Scanner;  

//class
class Fibonacci_twist {

     // Check for number prime or not and divisible by 5
    static boolean isPrime(int n)
    {
        //check for divisibility with 5
        if(n%5==0)
            return true;
 
        // Check if number is less than
        // equal to 1
        if (n <= 1)
            return false;
 
        // Check if number is 2
        else if (n == 2)
            return true;
 
        // Check if n is a multiple of 2
        else if (n % 2 == 0)
            return false;
 
        // If not, then just check the odds
        for (int i = 3; i <= Math.sqrt(n); i += 2)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }

	// Function to print N Fibonacci Number
	static void Fibonacci(int N)
	{
		int num1 = 0, num2 = 1;

		int counter = 0;

		// Iterate till counter is N
		while (counter < N) {

			// Print the number
            if(isPrime(num1))
                System.out.print(0 + " ");
            else    
			    System.out.print(num1 + " ");

			// Swap
			int num3 = num2 + num1;
			num1 = num2;
			num2 = num3;
			counter = counter + 1;
		}
	}

	// Driver Code
	public static void main(String args[])
	{
		// Given Number N
		Scanner sc=new Scanner(System.in);
        int N = sc.nextInt();  
        sc.close();  

		// Function Call
		Fibonacci(N);
	}
}
