def prime_checker(n):
    if n > 1:
        for k in range(2, n // 2 + 1):
            if (n % k) == 0:
                return False
        else:
            return True
    else:
        return False

num = int(input("Enter number of Input: "))

num1, num2 = 1, 1 
count = 0

if num == 1:
    print("Fibonacci series: ")
    print(num1)
else:
    print("Fibonacci series: ")
    while count < num:
        if not prime_checker(num1) and num1 % 5 != 0:
            print(num1, end=' ')
        else:
            print(0, end=' ')
        sum = num1 + num2
        num1 = num2
        num2 = sum
        count = count + 1
