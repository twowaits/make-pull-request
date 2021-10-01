def FibonacciNumbers(n):
 
    f1 = 1
    f2 = 1
    if (n < 1):
        return
    print(f1 , end = " ")
    for x in range(1, n):
        if(f2 % 5 == 0):
            print(0 , end = " ")
        else:
            print(f2 , end = " ")
        sum = f1 + f2
        f1 = f2
        f2 = sum

# Driven code
while(True):
    n = int(input())
    FibonacciNumbers(n)
    print()