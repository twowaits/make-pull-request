# contributed by @Dhruvinhp

def check_number(num):
    """
    Check numbers
    """
    if num==1:
        return False

    if num%5==0:
        return True

    for i in range(2,num):
        if num%i ==0:
            return False
            
    return True

def fibonacci(n, series={}):
    """
    Fibonacci Function
    """
    if n in series:
        return series[n]

    if n<=2:
        return 1

    series[n] = fibonacci(n-1, series) + fibonacci(n-2, series)
    return series[n]

def lets_apply(num):
    """
    main function to append the result into the List
    """
    arr = []

    for i in range (1, num+1):
        arr.append(fibonacci(i))

    for i in range(num):
        if check_number(arr[i]):
            print(0,end=" ")
        else:
            print(arr[i], end=" ")
    print('\n')

if __name__ == '__main__':
    lets_apply(int(input('Enter limit: ')))
    