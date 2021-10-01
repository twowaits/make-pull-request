def is_prime(num):
    if num > 1:
        for i in range(2, num // 2 + 1):
            if (num % i) == 0:
                return False
        else:
            return True
    else:
        return False

def fibonacci(num):
    num1, num2 = 1, 1 
    count = 0

    if num == 1:
        print(num1)
    else:
        while count < num:
            if not is_prime(num1) and num1 % 5 != 0:
                print(num1, end=' ')
            else:
                print(0, end=' ')
            num3 = num1 + num2
            num1 = num2
            num2 = num3
            count += 1 

num = int(input())
fibonacci(num)