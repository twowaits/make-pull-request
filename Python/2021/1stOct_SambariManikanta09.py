import math

# We need to first check if the number is prime or not


def ifprime(n):
    # flag = True
    if n == 2 or n == 3:
        return True
    if n > 1:
        for i in range(2, int(math.sqrt(n))):
            if (n % i) == 0:
                # flag = False
                return True
            else:
                return False
    else:
        return False


def Fib_twist():
    # Number of terms till which the sequence needs to be printed
    n = int(input("Enter the Number: "))
    a, b = 1, 1
    count = 0

    if n == 1:
        print("Fibonacci sequence upto", n, ":")
        print(a)
    else:
        while count < n:
            if not ifprime(a) and a % 5 != 0:
                print(a, end=" ")
            else:
                print(0, end=" ")
            sums = a + b
            a = b
            b = sums
            count += 1


Fib_twist()
