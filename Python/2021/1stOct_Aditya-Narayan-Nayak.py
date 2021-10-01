# Fibonacci series.
import math
 
# Function to check perfect square
def isSquare(n) :
    sr = (int)(math.sqrt(n))
    return (sr * sr == n)
 
 
# Prints all numbers less than
# or equal to n that  are
# both Prime and Fibonacci.
def printPrimeAndFib(n) :
     
    # Using Sieve to generate all
    # primes less than or equal to n.
    prime =[True] * (n + 1)
    p = 2
    while(p * p <= n ):
         
        # If prime[p] is not changed,
        # then it is a prime
        if (prime[p] == True) :
             
            # Update all multiples of p
            for i in range(p * 2, n + 1, p) :
                prime[i] = False
                 
        p = p + 1
     
    # Now traverse through the range
    # and print numbers that are
    # both prime and Fibonacci.
    for i in range(2, n + 1) :
        if (prime[i] and (isSquare(5 * i * i + 4) > 0 or
             isSquare(5 * i * i - 4) > 0)) :
            print(i , " ",end="")
 
 
# Driver function
n = 30
printPrimeAndFib(n);
 
