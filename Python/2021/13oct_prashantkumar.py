'''AUTHOR: Prashant kumar
Python3 Concept: Knuth-Morris-Pratt (KMP) String Matching Algorithm
GITHUB: https://github.com/Prashant0kgp
Add your python3 concept below'''
#  method-1
# gcd function of math module
import math
def gcd(a,b):
    return (math.gcd(a,b))
# driver code
print(gcd(5,120))
# method-2
# Recursion function 
def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b,a%b)
# driver code
print(gcd(5,120))
# method-3
# using for loop
def gcd(a,b):
    if a > b:
        a, b = b, a
    for i in range(1,a+1):
        if a%i == 0 and b%i == 0:
            gcd = i
    return gcd
# drievr code
print(gcd(5,120))
# thank you