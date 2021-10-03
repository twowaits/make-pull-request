# value of n
n = int(input("Enter n : "))

# n-1 value
sum1 = 0
# n-2 value
sum2 = 0

sum = sum1 + sum2

# prime number check function
def isPrime(num):
    if num > 1:    
        for i in range(2, int(num/2)+1):
            if (num % i) == 0:
                return False
        else:
            return True
    else:
        return False

# Fibonacci Series print
for i in range(1, n+1):
    if(i == 1):
        sum1 = 1
        print('1', end=' ')
    else:
        sum = sum1 + sum2
        sum2 = sum1
        sum1 = sum
        if(i%5 == 0 or isPrime(sum)):
            print('0', end=' ')
        else:
            print(sum, end=' ')
print()
