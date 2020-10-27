import math

def fact(a,b) :
    return math.factorial(min(a,b))

try:
    a= int(input("Enter the first number: "))
    b= int(input("Enter the second number: "))
    print(fact(a,b))
except:
    print("Please re-run the program and enter valid number.")
