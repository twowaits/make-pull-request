from math import sqrt

# No. of elements to be printed
n = int(input())

# Function to check whethe the given number is prime or not
def isPrime(n):
    prime_flag = 0    
    if(n > 1):
        for i in range(2, int(sqrt(n)) + 1):
            if (n % i == 0):
                prime_flag = 1
                break
        if (prime_flag == 0):
            return True
        else:
            return False
    else:
        return False

# First n elements of fibonacci sequence
prev = 1
prev_2 = 1
if n==1:
    print(1, end=" ")
else:
    for i in range(n):
        if i == 0 or i == 1:
            print(1, end=" ")
        else:
            num = prev + prev_2
            if num%5==0 or isPrime(num):
                print(0, end=" ")
            else:
                print(num, end=" ")
            prev_2 = prev
            prev = num
print()