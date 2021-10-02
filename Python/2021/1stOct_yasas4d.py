def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1 or n == 2:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)


def prime(n):
    c = 0
    for i in range(1, n+1):
        if n % i == 0:
            c += 1
    if c == 2:
        return True
    else:
        return False


print("Enter input number")
n = int(input())
for i in range(1, n+1):
    if prime(fibonacci(i)) == True or i % 5 == 0:
        print(0, end=" ")
    else:
        print(fibonacci(i), end=" ")

print("\n")
