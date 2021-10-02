# We need to first check if the number is prime or not
def prime(n):
    if n> 1:
        for i in range(2, n// 2 + 1):
            if (n % i) == 0:
                return False
        else:
            return True
    else:
        return False

n = int(input())
a, b = 1, 1
c = 0 #variable to track number of fibbonaci numbers

if n == 1:
    print("Fibonacci sequence upto", n, ":")
    print(a)
else:
    while c < n:
        if not prime(n1) and a % 5 != 0:
            print(a, end=' ')
        else:
            print(0, end=' ')
        sums = a + b
        a = b
        b = sums
        c += 1