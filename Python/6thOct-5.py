
def fibo(num):
l=[1]
a = 0
b = 1
if num <= 0:
print("Enter a non-negative Integer!")
elif num == 1:
print(b) 
else:
for i in range(1,num):
t = a + b
a = b
b = t
if b%5==0 or isPrime(b):
l.append(0)
else:
l.append(b)
print(l) 

def isPrime(no):  
        if no > 1:
           for i in range(2,no):
               if (no % i) == 0:
                   return False
           else:
               return True
        else:
           return False

fibonacci(int(input("Enter Number Of terms: ")))

