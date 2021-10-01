# Author: Alisha Kamat

# Function to check for a Prime Number
def is_Prime(num):
    for i in range(2, int(num/2)+1):
        if num%i == 0:
            return False
    return True
    
# Function to implement Pseudo Fibonacci Series
def pseudo_fibonacci(n):
    if n == 1:
        print("1")
    elif n == 2:
        print("1 1")
    else:
        a = 1
        b = 1
        count = 2
        print("1 1", end=' ')
        while count < n:
            c = a + b
            if c%5 == 0 or is_Prime(c):
                #output += str(0)
                print(str(0), end=' ')
            else:
                print(str(c), end=' ')
                #output += str(c)
            a = b
            b = c
            count = count + 1

# Main Function
def main():
    n = int(input("Enter the number of terms: "))
    pseudo_fibonacci(n)
    
main()