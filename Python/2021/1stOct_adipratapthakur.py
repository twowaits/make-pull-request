def isPrime(number):
    if number>1:
        for i in range(2,(number//2)+1):
            if (number%i) == 0:
                return False
        else:
            return True
    else:
        return False

nTerms = int(input("How many terms you want to print: "))

num1 = 1
num2 = 1
nextNum = 0
count = 0

print("Fibonacci Series: ",end=" ")

if nTerms<0:
    print("Invalid Output. Please Enter Positive integer.")
elif nTerms==1:
    print(nTerms)
else:
    while(count<nTerms):
        num1 = num2
        num2 = nextNum
        nextNum = num1+num2
        if isPrime(nextNum) or nextNum%5 == 0:
            print(0,end=" ")
        else:
            print(nextNum,end=" ")
        count += 1
