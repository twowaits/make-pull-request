def isPrime(n):
    if n==1:
        return False
    for i in range(2,int((n/2)+1)):
        if n%i==0:
            return False
    return True
def fibonacci(n):
    if n<=2 :
        return 1
    return fibonacci(n-1)+fibonacci(n-2)

if __name__ == '__main__':
    number = int(input())
    for i in range(1, number + 1):
        x = fibonacci(i)
        if isPrime(x) or x % 5 == 0:
            print("0", end=" ")
        else:
            print(f"{x}", end=" ")
