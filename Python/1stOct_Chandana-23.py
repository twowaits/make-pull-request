#Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0

def isPrime(x):
    if x == 1:
        return False
    for i in range(2,x):
        if x%i == 0:
            return False
    return True
def fibonacci(n):
    f1 = 1
    f2 = 1
    print(f1,f2,end=" ")
    for i in range(3,n+1):
        f3 = f1 + f2
        if f3%5 == 0 or isPrime(f3):
            print(0,end=" ")
        else:
            print(f3,end=" ")
        f1 = f2
        f2 = f3
        
n = int(input("Enter n value: "))
if n<0:
    print("Please enter positive n value")
else:
    fibonacci(n)
