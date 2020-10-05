#!/usr/bin/env python

# function addition
def add(x, y):
    return x + y

# function subtraction


def subtract(x, y):
    return x - y

# function multiplication


def multiply(x, y):
    return x * y

# function division


def divide(x, y):
    return x / y


# menu
print("Select Options")
print("1.Addition")
print("2.Subtraction")
print("3.Multiplication")
print("4.Division")

choice = input("Input your Options (1/2/3/4) >> ")
num1 = int(input("Enter the first number >> "))
num2 = int(input("Enter the second number >> "))
if choice == '1':
    print(num1, "+", num2, "=", add(num1, num2))
elif choice == '2':
    print(num1, "-", num2, "=", subtract(num1, num2))
elif choice == '3':
    print(num1, "*", num2, "=", multiply(num1, num2))
elif choice == '4':
    print(num1, "/", num2, "=", divide(num1, num2))
else:
    print("Wrong Input!")
