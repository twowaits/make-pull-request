// Java program to print prime numbers
// present in Fibonacci series.
class PrimeAndFib
{
// Function to check perfect square
Boolean isSquare(int n)
{
	int sr = (int)Math.sqrt(n);
	return (sr * sr == n);
}

// Prints all numbers less than or equal
// to n that are both Prime and Fibonacci.
static void printPrimeAndFib(int n)
{
	// Using Sieve to generate all
	// primes less than or equal to n.
	Boolean[] prime = new Boolean[n + 1];
	
	// memset(prime, true, sizeof(prime));
	for (int p = 0; p <= n; p++)
	prime[p] = true;
	for (int p = 2; p * p <= n; p++) {

		// If prime[p] is not changed,
		// then it is a prime
		if (prime[p] == true) {

			// Update all multiples of p
			for (int i = p * 2; i <= n; i += p)
				prime[i] = false;
		}
	}

	// Now traverse through the range and
	// print numbers that are both prime
	// and Fibonacci.
	for (int i=2; i<=n; i++) {
		double sqrt = Math.sqrt(5 * i * i + 4);
		double sqrt1 = Math.sqrt(5 * i * i - 4);
	
		int x = (int) sqrt;
		int y = (int) sqrt1;

	if (prime[i]==true && (Math.pow(sqrt,2) ==
		Math.pow(x,2) || Math.pow(sqrt1,2) ==
		Math.pow(y,2)))
		System.out.print(i+" ");
	}
}

// driver program
public static void main(String s[])
{
	int n = 30;
	printPrimeAndFib(n);
}
}
