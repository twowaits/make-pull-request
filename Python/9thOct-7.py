import math as m
x, y=map(int, input().split())
p=m.factorial(x)
q=m.factorial(y)
print(m.gcd(p,q))
