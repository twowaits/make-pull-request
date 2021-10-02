# Fibonacci Series with a Twist
# Take input balue 'n' upto which you will print
# print the Fibonacci Series upto n while replacing prime
# numbers, all multiples of 5 by 0
# Contribution = Muskan Jain

def check_replace(num):
    # 1 is neither prime number nor multiple of 5
    if num==1:
        return False

    # multiples of 5 to be replaced
    if num%5==0:
        return True

    # not a prime numbers
    for i in range(2,num):
        if num%i ==0:
            return False
    # if neither above condition is satisfied then the we have the prime number
    return True

# fibonacci series function upto n terms
def fibonacci(n, series={}):
    if n in series:
        return series[n]

    # base case
    if n<=2:
        return 1

    # recursive function
    series[n] = fibonacci(n-1, series) + fibonacci(n-2, series)
    return series[n]

def main(num):
    # Fibonacci number
    arr = []

    for i in range (1, num+1):
        arr.append(fibonacci(i))

    # modifications as per requirement
    for i in range(num):
        if check_replace(arr[i]):
            print(0,end=" ")
        else:
            print(arr[i], end=" ")
    print('\n')

if __name__ == '__main__':
    main(12)
    main(27)