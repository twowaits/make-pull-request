def factorial(num: int) -> int:
    if num == 1:
        return num
    return num * factorial(num - 1)

def gcd(num1: int, num2: int) -> int:
    if num1 == num2:
        return num1
    if num1 < num2:
        smaller = num1
        larger = num2
    elif num1 > num2:
        smaller = num2
        larger = num1
    for divisor in range(smaller, 0, -1):
        if larger % divisor == 0:
            return divisor

def gcdOfFactorial(a: int, b:int) -> int:
    return gcd(factorial(a), factorial(b))

a, b = [int(num) for num in input().split()]
print(gcdOfFactorial(a, b))