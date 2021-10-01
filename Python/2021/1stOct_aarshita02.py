# Number of terms till which the sequence needs to be printed
n = int(input())

a, b = 1, 1
count = 0

# We need to first check if the number is prime or not
def ifprime(n):
    if n> 1:
        for i in range(2, n// 2 + 1):
            if (n % i) == 0:
                return False
        else:
            return True
    else:
        return False

if n == 1:
    print("Fibonacci sequence upto", n, ":")
    print(a)
else:
    while count < n:
        if not ifprime(n1) and a % 5 != 0:
            print(a, end=' ')
        else:
            print(0, end=' ')
        sums = a + b
        a = b
        b = sums
        count += 1
