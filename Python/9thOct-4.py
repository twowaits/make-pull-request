def fact(num):
    if num==0 or num==1:
        return 1
    else:
        return num*fact(num-1)
num1=int(input("Enter 1st no:"))
a=fact(num1)
num2=int(input("Enter 2nd no:"))
b=fact(num2)
i = 1
while(i <= a and i <=b):
  if(a % i == 0 and b % i == 0):
    gcd = i
  i = i + 1
print("GCD is", gcd)


# import math
# def gcd(num1,num2):
#     return math.factorial(min(num1,num2))
# a=int(input("enter 1st number:"))
# b=int(input("Enter 2nd number:"))
# print(gcd(a,b))