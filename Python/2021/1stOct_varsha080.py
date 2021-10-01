import math
def isprime(p):
    for x in range(2,int(math.sqrt(p))+1):
        if p%x==0:return False
    return True
p=int(input())
a=0;b=1;sum=0
print(b,end=' ')
for x in range(p-1):
    sum=a+b;a=b;b=sum
    print(0 if (sum!=1 and (sum%5==0 or isprime(sum))) else sum,end=' ' )
