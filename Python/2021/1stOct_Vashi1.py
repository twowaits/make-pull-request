# Checking for prime numbers
def isprime(numb):
    if numb == 2:
        return True
    elif numb == 3:
        return True    
    else :
        for i in range(2, numb // 2 + 1):
            if (numb % i) == 0:
                return False
            else:
                return True
# Finding out the fibonacci numbers
def fibonacci_series(n):
    flag = 0
    a,b = 1,1
    if n == 1:
        print(a)
    else:
        print(a, end = " ")
        print(b, end = " ")
        while flag <= n:
            c = a + b
            a,b = b,c
            flag += 1
            if c % 5 == 0 or isprime(c):
                print(0, end = " ") 
            else:
                print(c, end = " ")




# The number of fibonacci terms required

n1 = int(input("Enter the value of n: "))
n = n1 - 3
fibonacci_series(n)