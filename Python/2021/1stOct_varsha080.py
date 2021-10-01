def IsPrime(t):
    c=2
    for i in range(t//2):
        if(t%c==0 and t!=2):
            return False
        else:
            c+=1
    return True

n=int(input())
a=0
b=1
print(1,end=" ")
for i in range(n-1):
    c=a+b
    a=b
    b=c
    if(c>=2):
        p=IsPrime(c)
    else:
        p=0
    if(p==True):
        print(0,end=" ")
    else:
        if(c%5==0):
            print(0,end=" ")
        else:
            print(c,end=" ")
