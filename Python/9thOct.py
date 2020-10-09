# Python code to find GCD of factorials of 
# two numbers. 
import math 
  
def gcdOfFactorial(m, n) : 
    return math.factorial(min(m, n)) 
  
# Driver code 
n = int(input("Enter an number >>>"))
m = int(input("Enter an number >>>"))

print(gcdOfFactorial(m, n))