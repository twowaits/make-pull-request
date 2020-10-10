import math

def Factorial(m, n) :
    return math.factorial(min(m, n))
n = int(input())
m = int(input())
print(Factorial(m, n))
