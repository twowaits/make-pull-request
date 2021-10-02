num=int(input())
f1=1
f2=1
def is_prime(n):
    if n<=1:
        return False
    else:
        for i in range(2,n):
            if(n%i==0):
                return False
        return True
if (num<2 and num>=1):
    print(f1,end=' ')
if (num>=2):
    print(f1, end=' ')
    print(f2, end=' ')
for i in range (3,num+1):
    temp=f1+f2
    if (temp%5==0 or is_prime(temp)==True):
        print(0, end=' ')
    else:
        print(temp,end=' ')
    f1=f2
    f2=temp
