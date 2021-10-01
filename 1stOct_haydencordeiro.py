import math

n=int(input())
# Find the nth fibonacii number
def Fibonacii(n):
    first=1
    sec=1
    if n == 0:
        return first
    elif n == 1:
        return sec
    else:
        for i in range(2, n):
            c = first+ sec
            first= sec
            sec = c
        return c
nthFibNo=Fibonacii(n)

# implementing Sieve of Eratosthenes uptill nth Fibonacii Number
def isPrime(n):
    if n==1:
        return False
    elif n==2:
        return True
    for i in range(2,int(math.sqrt(n)+1)):
        if n%i==0:
            return False
    return True
t=[True for i in range(nthFibNo+1)]
t[0]=False
t[1]=False

for i in range(1,int(math.sqrt(nthFibNo)+1)):
    if  t[i] and isPrime(i):
        for j in range(i*2,nthFibNo+1,i):
            t[j]=False
    

# using  Sieve of Eratosthene calculted values along with modular division to replace prime and nos that are divisible by 5
first=0
sec=1
for i in range(1, n+1):
    if t[sec] or sec%5==0:
        print(0,end=" ")
    else:
        print(sec,end=" ")
    c = first+ sec
    first= sec
    sec = c
