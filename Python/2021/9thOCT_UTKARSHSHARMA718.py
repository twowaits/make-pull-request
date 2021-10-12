#python GCD of factorials program


import math

def gcdOfFactorial(m, n) :
    
	return math.factorial(min(m, n))


m = int(input("Enter first   no. :"))
n = int(input("Enter secound no. :"))
print(gcdOfFactorial(m, n))