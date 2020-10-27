import math

s = input()
num1 = int(s.split()[0])
num2 = int(s.split()[1])

reqfact = math.factorial(min(num1,num2))
print (reqfact)