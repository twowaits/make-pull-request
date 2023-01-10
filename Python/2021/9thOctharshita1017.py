# You are given two number a and b, you have to print the GCD of the factorials of these two numbers.
# Print the number on the basis of sample I/O provided below.

import math


def gcdoffact(n1, n2):
    return math.factorial(min(n1, n2))


number1 = int(input("Enter first   number :"))
number2 = int(input("Enter second number :"))
print(gcdoffact(number1, number2))
