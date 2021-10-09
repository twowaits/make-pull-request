import math
def gcdOfFactorial(m, n) :
    return math.factorial(min(m, n))

m = int(input())
n = int(input())
print(gcdOfFactorial(m, n))
