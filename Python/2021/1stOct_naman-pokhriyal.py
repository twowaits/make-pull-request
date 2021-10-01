def primeCheck(x):
    
    for i in range(2,x):
        if(x%i==0):
            return True
    return False

def fiveCheck(x):
    if(x%5==0):
        return False
    return True

def fib(a, b, x):
    if(a>x):
        return

    if((primeCheck(a) and fiveCheck(a))or a==1):
        print(a ," ", end="")
    else:
        print("0 ", end="")
        
    fib(b, a+b, x)

n = int(input())

fib(0,1,n)
