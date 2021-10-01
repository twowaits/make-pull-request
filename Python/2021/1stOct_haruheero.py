//Fibonacci 1st October
import math
def isprime(n):
    for x in range(2,int(math.sqrt(n))+1):
        if n%x==0:return False
    return True
n=int(input())
a=0;b=1;sum=0
print(b,end=' ')
for x in range(n-1):
    sum=a+b;a=b;b=sum
    print(0 if (sum!=1 and (sum%5==0 or isprime(sum))) else sum,end=' ' )
