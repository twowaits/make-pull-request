import math

# fibonacci series


def is_prime(n):
    if n <= 1:
        return False
    if n == 2:
        return True
    if n > 2 and n % 2 == 0:
        return False
    max_div = math.floor(math.sqrt(n))
    for i in range(3, 1 + max_div, 2):
        if n % i == 0:
            return False
    return True


def is_mul_of_5(n):
    if(n % 5 == 0):
        return True
    return False


def fibo_twist(n):
    a = 1
    b = 1
    for i in range(n):
        if (is_prime(a) or is_mul_of_5(a)):
            print("0 ", end="")
        else:
            print(f"{a} ", end="")
        c = a+b
        a = b
        b = c


if __name__ == "__main__":
    n = int(input("Enter a integer : "))
    fibo_twist(n)
