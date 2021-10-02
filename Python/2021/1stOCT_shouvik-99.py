#My Solution to Twist Fibonacci Series.
import math
n=int(input())
ans=[]
if n>=1:
    ans.append(1)
if n>=2:
    ans.append(1)
if n>=3:
    ans.append(0)
a,b=1,2
for _ in range(0,n-3):
    c=a+b
    if c%5==0:
        ans.append(0)
    else:
        flag=False
        for i in range(2,int(math.sqrt(c))+1):
            if c%i==0:
                flag=True
                break
        if flag:
            ans.append(c)
        else:
            ans.append(0)
    a,b=b,c
print(*ans)
