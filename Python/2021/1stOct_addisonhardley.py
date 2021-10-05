import math

def isPrime(x):
    if(x == 1): return False
    for i in range(2, int(math.sqrt(x)+1)):
        if(x%i == 0): return False
    return True

def fibonacciWithTwist(n):
    fib = [1]*n
    print(fib[0], end=" ")
    if(n == 1): return 0
    print(fib[1], end=" ")
    for i in range(2, n):
        fib[i] = fib[i-1] + fib[i-2]
        if(isPrime(fib[i]) or fib[i]%5 == 0):
            print(0, end=" ")
        else:
            print(fib[i], end=" ")

n = int(input("Enter number of terms:"))

fibonacciWithTwist(n)