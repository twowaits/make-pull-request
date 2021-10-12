#python program to find GCD of factorials of any two given numbers

def factorial(num):
    fact = 1
    i=1
    while i<=num:
        fact = fact * i
        i=i+1
    return fact

def gcd(x,y):
   if y == 0:
       return x
   return gcd(y, x % y)

a = int(input())
b = int(input())
x=factorial(a)
y=factorial(b)
print(gcd(x,y))
