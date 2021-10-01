'''
Author: Ruchika Suryawanshi
Problem Statement: Take input the value of 'n', upto which you will print.
                    -Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.
Sample Input : 12  
Sample Output : 1 1 0 0 0 8 0 21 34 0 0 144

'''
number = (int(input("Enter Number:")))
# Function
def check_number(number):
    if number > 1:
        for i in range(2, number // 2 + 1):
            if (number % i) == 0:
                return 0
        else:
            return 1
    else:
        return 0

number1 = 1
number2 = 1
c = 0
if number == 1:
    print("Fibonacci sequence is:")
    print(number1)
else:
    print("Fibonacci sequence is:")
    while c < number:
        if not check_number(number1) and number1 % 5 != 0:
            print(number1, end=' ')
        else:
            print(0, end=' ')
        nth = number1 + number2
        number1 = number2
        number2 = nth
        c += 1


