def prime(a):
    if (a<2):
        return False
    for x in range(2,a):
        if(a%x==0):
            return False
    return True
def fibo(n):
    a=[1,1]
    n1=1
    n2=1
    for x in range(n-2):
        n1,n2=n2,n1+n2
        a.append(n2)
    return a
def main():
    n=int(input("enter number"))
    f=fibo(n)
    for x in range(len(f)):
        if(prime(f[x]) or f[x]%5==0):
            f[x]=0
    print(*f)
#driver code
main()
