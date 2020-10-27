import math 
  
def hcfOfFactorial(x, y) : 
    return math.factorial(min(x, y)) 
  
a,b= map(int,input().split())
print(hcfOfFactorial(a, b))
