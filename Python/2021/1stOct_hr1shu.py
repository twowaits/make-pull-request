from math import sqrt

def is_prime(n):
    flag = 0
    
    if n>1:
        for i in range(2, int(sqrt(n))):
            if n%i == 0:
                flag = 1
                break
        if flag == 0:
            return True
        else:
            return False
    
    else:
        return False
    
    
def fibonacci(n):
    cnt = 0
    arr = []
    
    first = 0
    second = 1
    temp = 0
    
    while cnt <= n:
        arr.append(first)
        temp = first + second
        first = second 
        second = temp
        cnt += 1
        
    for i in range(len(arr)):
        if arr[i] % 5 == 0 or is_prime(arr[i]):
            arr[i] = 0
        
    print(*arr[1:])
    
fibonacci(27)
        
        
    