import math

a,b = map(int,input().split())

def factorial(n):
    if n<=1:
        return 1
    return n*factorial(n-1)


a1 = factorial(a)
b1 = factorial(b)

print(math.gcd(a1,b1))



