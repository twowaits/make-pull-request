import math
def pri(n):
    for i in range(2,int(math.sqrt(n))+1):
        if n%i==0: return False
    return True
n=int(input())
x1=0;x2=1;s=0
print(x2,end=' ')
for i in range(n-1):
    s=x1+x2;x1=x2;x2=s
    print(0 if(s!=1 and (s%5==0 or pri(s))) else s,end=' ')