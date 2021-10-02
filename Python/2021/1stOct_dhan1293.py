def is_prime(num):
    if num > 1:
        for i in range(2, num // 2 + 1):
            if (num % i) == 0:
                return False
        else:
            return True
    else:
        return False


n = int(input("Fibonacci Sequence upto: "))

n1, n2 = 1, 1
count = 0

if n == 1:
    print(n1)

elif n <= 0:
    print("Enter number greater than 0")
else:
    while count < n:
        if not is_prime(n1) and n1 % 5 != 0:
            print(n1, end=' ')
        else:
            print(0, end=' ')
        sum = n1 + n2
        n1 = n2
        n2 = sum
        count += 1
