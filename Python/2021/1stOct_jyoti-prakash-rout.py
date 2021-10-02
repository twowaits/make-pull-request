n = int(input())
n1, n2,fib = 1, 1, 0,

def primeDetector(n):
    if n > 1:
        for i in range(2, n // 2 + 1):
            if (n % i) == 0:
                return False
        else:
            return True
    else:
        return False

if n == 1:
    print(n1)

else:
    while fib < n:
        if not primeDetector(n1) and n1 % 5 != 0:
            print(n1, end=' ')
        else:
            print(0, end=' ')
        nth = n1 + n2
        n1 = n2
        n2 = nth
        fib += 1
