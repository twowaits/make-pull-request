import math
 
def gcdOfFactorial(m, n) :
    return math.factorial(min(m, n))
 
a = int(input())
b = int(input())
print(gcdOfFactorial(a, b))
