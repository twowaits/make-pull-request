import math
 
def gcdOfFactorial(m, n) :
    return math.factorial(min(m, n))
 
m = 5
n = 120
print(gcdOfFactorial(m, n))
