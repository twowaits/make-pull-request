# Limit till whih Fibonacci Series should be printed
limit = int(input("Enter the limit : "))

num1 = 1
num2 = 1
ct = 0

# Function for checking prime no


def check_primeno(limit):
    if limit > 1:
        for i in range(2, limit//2 + 1):
            if (limit % i == 0):
                return False
        else:
            return True
    else:
        return False


# Printing the Fibonacci Series

if limit != 1:
    while (ct < limit):
        if not check_primeno(num1) and num1 % 5 != 0:
            print(num1, end=' ')
        else:
            print(0, end=' ')
        sum = num1 + num2
        num1 = num2
        num2 = sum
        ct += 1

else:
    print("Fibonacci series  upto", limit, "is :", num1)
