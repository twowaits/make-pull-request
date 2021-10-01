from math import sqrt
def isPrime(n):
    prime_flag = 0

    if(n > 1):
        for i in range(2, int(sqrt(n)) + 1):
            if (n % i == 0):
                prime_flag = 1
                break
        if (prime_flag == 0):
            return True
        else:
            return False
    else:
        return False

def printSpecialFibo(n,lis):
    f1=1
    f2=1
    lis.append(f1)
    if(n<1):
        return 
    for i in range(1,n):
        lis.append(f2)
        f3 = f1+f2
        f1=f2
        f2=f3

n = int(input())
lis = []
printSpecialFibo(n,lis)

for i in range(len(lis)):
    if(isPrime(lis[i]) or lis[i]%5==0):
        lis[i] = 0
    print(lis[i], end=" ")


