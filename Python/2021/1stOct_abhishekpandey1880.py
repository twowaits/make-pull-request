# Made by Abhishek
import math
def isPrime(x):
    if x <= 1:
        return False
    if x == 2:
        return True
    if x > 2 and x % 2 == 0:
        return False
 
    end = math.floor(math.sqrt(n))
    for i in range(3, end+1, 2):
        if x % i == 0:
            return False
    return True


n = int(input("Enter number of elements: "))
sum = 0
n1 = 1
n2 = 1
count = 0
if n == 1:
  print(n1)
else:
  while(count<n):
    if (not isPrime(n1)) and (n1 % 5 != 0):
      print(n1, end = ' ')
    else:
      print(0, end = ' ')
    sum = n1 + n2
    n1 = n2
    n2 = sum
    count += 1
