#fibonacci problem solved by Amit giri

def is_prime(n):
    c = 0
    for i in range(1, n + 1):
        if n % i == 0:
            c += 1
    if c == 2:
        return True
    else:
        return False


def fibon(n):
    if n == 0:
        return 0
    elif n == 1 or n == 2:
        return 1
    else:
        return fibon(n - 1) + fibon(n - 2)


n = int(input("enter number upto which you want fibonacci : "))
for i in range(1, n + 1):
    if is_prime(fibon(i)) == True or i % 5 == 0:
        print(0, end=" ")
    else:
        print(fibon(i), end=" ")
