gcd = 0
print(“Enter two numbers : “)
a = int(input())
b = int(input())
i = 1
     while(i <= a and i <= b):
          if((a % i == 0) and (b % i == 0)):
               gcd = i
          i = i + 1

print(“GCD : “,end=”);
print(gcd)

