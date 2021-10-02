def check_prime(num):
    if num > 1:
        for i in range(2, num // 2 + 1):
            if (num % i) == 0:
                return False
        else:
            return True
    else:
        return False

n = int(input())
a = 1
b =  1 
count = 0

if n == 1:
    print("Fibonacci sequence upto", n, ":")
    print(a)
else:
    print("Fibonacci sequence:")
    while count < n:
        if not check_prime(a) and a % 5 != 0:
            print(a, end=' ')
        else:
            print(0, end=' ')
        fib = a + b
        a = b
        b = fib
        count += 1
