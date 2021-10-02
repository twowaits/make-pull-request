import math


def is_prime(n):
    if n == 2:
        return True
    if n % 2 == 0 or n <= 1:
        return False

    sqr = int(math.sqrt(n)) + 1

    for divisor in range(3, sqr, 2):
        if n % divisor == 0:
            return False
    return True

def fib(n):
  if n == 0:
      return 0
  elif n == 1:
      return 1
  else:
      return fib(n-1) + fib(n-2)



num = int(input("Enter number of steps: "))

for i in range(num):
  f = fib(i+1)
  if(f % 5 == 0 or is_prime(f)):
    print(0)
  else:
    print(f)
