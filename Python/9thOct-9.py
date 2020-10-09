# Python code to find GCD of factorials of two numbers. 
import math 
  
def gcdOfFactorial(m, n) : 
    return math.factorial(min(m, n)) 
  
# Driver code 
m = int (input())
n= int(input())
print(gcdOfFactorial(m, n)) 
