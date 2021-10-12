def fib(n): #fibonacci series
    if n==1:
        return [1]
    elif n==2:
        return [1,1]
    else:
        a,b=1,1
        l=[1,1]
        for x in range(3,n+1):
            c=a+b
            a=b
            b=c
            l.append(c)
        return l
def prime(f): # checking number is prime
    c=0
    for y in range(1,f+1):
                if f%y==0:
                    c=c+1
    if c==2:
        return 0
    else:
        return f
def chk(e):  # checking condition multiple of 5 or prime 
    for x in range(2,len(e)):
        if e[x]%5==0:
            e[x]=0
        else:
            e[x]=prime(e[x])
            
    return e
n=int(input())
p=fib(n)
print(p)# actual fibonacci series
d=chk(p)
print(d)# updated fibonacci series
