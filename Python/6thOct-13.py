def prime_check(num:int) -> int: 

    if num > 1: 

        for i in range(2, num): 

            if (num % i) == 0: 
                return 0
                break 

        else: 
            return 1 
    
    else: 
        return 0

def print_fibbonaci(n : int):
    n1, n2 = 1, 1
    count = 0

    while count < n:
        if n1 % 5 == 0 or prime_check(n1) == 1:
            print(0, end= " ")

        else:
            print(n1, end=" ")

        nth = n1 + n2
        n1 = n2
        n2 = nth
        count += 1

if __name__ == "__main__":
    print_fibbonaci(int(input().strip()))
