def fib(n): #returns the nth term of fibonacci series

    if(n==1):

        return 1

    elif(n==2):

        return 1

    else:

        return fib(n-1)+fib(n-2)

 

def prime(n):

    c=0

    for i in range(1,n+1):

        if(n%i==0):

            c=c+1

    return(c==2)

   

n=int(input("Enter terms: "))

c,t=1,0

while(c<=n):

    t=fib(c)

    if(prime(t) or t%5==0):

        print(0,end=" ")

    else:

        print(t,end=" ")

    c=c+1
