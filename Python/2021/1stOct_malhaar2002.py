n = int(input("Number of terms: "))

def fibonacci(num):
    n1 = 1
    n2 = 1
    count = 0
    # check if the number of terms is valid
    if n <= 0:
        print("Please enter a positive integer")
    # if there is only one term, return n1
    elif n == 1:
        print(n1)
    # generate fibonacci sequence
    else:
        while count < n:
            # check for prime number and multiple of 5
            if not checkPrime(n1) and not checkMultOfFive(n1):
                print(n1, end = " ")
            else:
                print(0, end = " ")
            nth = n1 + n2
            # update values
            n1 = n2
            n2 = nth
            count += 1

def checkPrime(num): 
    if num > 1:
        for i in range(2, int(num/2)+1):
            if (num % i) == 0:
                break
        else:
            return True

def checkMultOfFive(num):
    if num % 5 == 0:
        return True       
    
fibonacci(n)
