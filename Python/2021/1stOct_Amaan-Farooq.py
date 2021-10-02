def is_prime(num):
    if num > 1:
        for i in range(2, num // 2 + 1):
            if (num % i) == 0:
                return False
        else:
            return True
    else:
        return False

n = int(input("Enter the number of terms needed"))

n1, n2 = 1, 1 
cnt = 0

if n == 1:
    print(n1)
else:
    while cnt < n:
        if not is_prime(n1) and n1 % 5 != 0:
            print(n1, end=' ')
        else:
            print(0, end=' ')
        sum = n1 + n2
        n1 = n2
        n2 = sum
        cnt += 1 
