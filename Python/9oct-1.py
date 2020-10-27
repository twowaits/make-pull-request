import math 
  
def gcdOfFactorial(m, n) : 
    return math.factorial(min(m, n)) 
  
# Driver code 
n = int(input())
m = int(input())
print(gcdOfFactorial(m, n)) 
