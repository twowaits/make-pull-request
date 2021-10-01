def IsPrime(p):
    c=2
    for i in range(p//2):
        if(p%c==0 and p!=2):
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
        z=IsPrime(c)
    else:
        z=0
    if(z==True):
        print(0,end=" ")
    else:
        if(c%5==0):
            print(0,end=" ")
        else:
            print(c,end=" ")
