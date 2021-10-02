import math

def checkPrime(num):
    if(num <= 1):
        return False
    x = num ** (0.5)
    x = math.ceil(x)

    for i in range(2,x):
        if(num % i == 0):
            return False
    return True


n = int(input("Input n : "))
arr = []
arr.append(1)
arr.append(1)

print(arr[0])
print(arr[1])

for i in range(2,n):
    x = arr[i-1] + arr[i-2]
    arr.append(x)

    if( (checkPrime(arr[i]))  or (arr[i] % 5 == 0)):
        print(0)
    else:
        print(arr[i])