n = int(input()) 
def printFibo( n):
        
    a = 1
    b = 1
    print(a + " " + b)

    while(n > 2):
        c = a + b
        a = b
        b = c

        if(isPrime(c) or c//5==0):
            print(" " + 0 + " ")
            
        else:
            print(" "+ c + " ")
            
        n=n-1

def isPrime(num):
    for i in range(2, i*i<=num):
        if(num % i == 0):
            return False
        i=i+1
    return True
