n = int(input())
a=1
b=1
for i in range(1,n+1):
    if(i==1):
        print(1,end=" ")
        continue
    if(i==2):
        print(1,end=" ")
        continue
    t=a+b
    a=b
    b=t
    print(t,end=" ")
