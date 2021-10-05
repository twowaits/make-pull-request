import math
h=int(input())
n=int(input())
x=1
y=1
flag=True
d={}
while(n>0):
    if y in d:
        d[y]+=[x]
    else:
        d[y]=[x]
    x+=1
    if(flag):
        y+=1
    if(not flag):
        y-=1
    if(y==h):
        flag = False
    if(y==1):
        flag = True
    n-=1
a=[]
for i in range(1,h+1):
    b=[]
    x=0
    for j in d[i]:
        b+=[' ']*(j-x-1)
        b+=[j]
        x=j
    print(*b)
