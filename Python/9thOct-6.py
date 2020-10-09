import math

def gcdOfFactorial(m, n) :
    return math.factorial(min(m, n))
n = int(input("enter the first no. : "))
m = int(input("enter the second no. : "))
print(gcdOfFactorial(m, n))