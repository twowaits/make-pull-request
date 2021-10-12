#Python code to find GCD of factorial of two given numbers

def factorial(x):
    if(x <= 1):
        return 1
    fac = 2
    for i in range(3, x+1):
        fac *= i
    return fac

def gcdOfFac(a, b):
    if(a < b):
        min = a
    else:
        min = b
    return factorial(min)

print("Enter two numbers:")
m = int(input())
n = int(input())
print("GCD of Factorial of ", m, " and ", n, " is ", gcdOfFac(m, n))
