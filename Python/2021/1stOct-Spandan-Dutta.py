def prime(number):
    if number > 1:
        for i in range(2, number // 2 + 1):
            if (number % i) == 0:
                return False
            else:
                return True
    else:
        return False

number = int(input("Enter any number: "))


count = 0
number1 = 1 
number2 = 1 


if number == 1:
    print("Factorial sequence: ")
    print(number1)

else:
    while count < number:
        if not prime(number1) and number1 % 5 != 0:
            print(number1, end=' ')
        else:
            print(0, end=' ')
        n = number1 + number2
        number1 = number2
        number2 = n
        count += 1
