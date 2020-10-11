def fib(n1):
    if(n1==1 or n1==2):
        return 1
    else:
        return fib(n1-1)+fib(n1-2)

n=int(input())
for i in range(1,n+1):
    print(fib(i),end=' ')
    
        
