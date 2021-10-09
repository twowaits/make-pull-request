import math
def gcd(a,b):
    if (b == 0):
        return a
    if (a == 0):
        return b
    if (a == b):
        return a
    if (a > b):
        return gcd(a-b, b)
    return gcd(a, b-a)
ans=gcd(5,10)
print(math.factorial(ans))
