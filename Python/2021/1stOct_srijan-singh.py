# Contributed by Srijan Singh

def is_prime_special(num):
    # 1 is not considered as prime number
    if num == 1:
        return False

    # Special Case
    if num%5 == 0:
        return True

    for i in range(2,num):
        if num%i == 0:
            return False
    
    # Is prime number
    return True


def fib(n, my_dict={}):
    if n in my_dict:   
        return my_dict[n]
    if n<=2: 
        return 1
    my_dict[n] = fib(n-1, my_dict) + fib(n-2, my_dict)
    return my_dict[n]
  

def main(num):
    # Store fibbonaci number
    arr = []
    
    for i in range(1,num+1):
        arr.append(fib(i))
    
    # Print the required case with modification
    for i in range(num):
        if is_prime_special(arr[i]):
            print(0, end=" ")
        else:
            print(arr[i], end=" ")
    print('')


if __name__ == "__main__":
    main(12) # 1 1 0 0 0 8 0 21 34 0 0 144 
    main(27) # 1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418 
