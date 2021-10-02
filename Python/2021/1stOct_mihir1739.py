import math as m
def is_prime(n):
    r = int(m.sqrt(n))+1
    prime = True
    for i in range(2,r+1):
        if(n % i == 0):
            return False
    
    return prime

def fibonacci(o):
    a = 1
    b = 1
    print(a,end=' ')
    print(b,end=' ')
    curr = 2
    while(curr<o):
        c = a + b
        if(is_prime(c) or c % 5 == 0):
            print('0',end=' ')
        else:
            print(c,end=' ')
        a = b
        b = c
        curr += 1

g = int(input())
fibonacci(g)