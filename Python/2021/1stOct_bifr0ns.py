import math


def isprime(n):
    for x in range(2, int(math.sqrt(n))+1):
        if n % x == 0:
            return False
    return True


def getFib(n):
    lastTwo = [1, 1]
    counter = 0

    for i in range(2, n):
        counter = lastTwo[i-1] + lastTwo[i-2]
        lastTwo.append(counter)

    for number in lastTwo:
        if(number % 5 == 0 or isprime(number) and number != 1):
            print("0", end=" ")
        else:
            print(number, end=" ")
        if n == 1:
            return


n = int(input())
getFib(n)
