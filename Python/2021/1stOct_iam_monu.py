def prime(no):
    if no > 1:
        for i in range(2, no // 2 + 1):
            if (no % i) == 0:
                return False
        else:
            return True
    else:
        return False

n = int(input("How many terms you want to display? "))

n1, n2 = 1, 1 
count = 0


if n == 1:
    print("Fibonacci sequence upto", n, "is :")
    print(n1)

else:
    print("Fibonacci sequence:")
    while count < n:
        if not prime(n1) and n1 % 5 != 0:
            print(n1, end=' ')
        else:
            print(0, end=' ')
        nth = n1 + n2
        n1 = n2
        n2 = nth
        count += 1
