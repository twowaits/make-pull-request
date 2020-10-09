num1 = int(input("Enter 1st number: "))
num2 = int(input("Enter 2nd number: "))
i = 1
while(i <= num1 and i <= num2):
  if(num1 % i == 0 and num2 % i == 0):
    gcd = i
  i = i + 1
print("GCD is", gcd)

#gcd of factorials of two number

import math 
  
def gcdOfFactorial(m, n) : 
    return math.factorial(min(m, n)) 
  
# Driver code 
m = 5
n = 9
print(gcdOfFactorial(m, n))
