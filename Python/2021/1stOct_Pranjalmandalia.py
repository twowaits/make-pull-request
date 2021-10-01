# Program to display the Fibonacci sequence up to n-th term with twist

# Take input
nterms = int(input())



# Checker function if number is prime or divisible by 5
def check(num):
    if num > 1:
        if num%5==0:
            return False
        for i in range(2, int(num/2)+1):
            if (num % i) == 0:
                return False
            else:
                return True
 
    else:
        return False

# Fibonacci series print funciton
def Fibonacci_print(nterms):
    n1, n2 = 0, 1
    count = 0
    print("Fibonacci sequence:")
    while count < nterms:
        if(check(n1)):
            print(0)
        else:
            print(n1)
        nth = n1 + n2
        # update values
        n1 = n2
        n2 = nth
        count += 1
    
Fibonacci_print(nterms)