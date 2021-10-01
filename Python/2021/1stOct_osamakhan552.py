def getFibo(num):
    fibonacci = [0, 1]

    for i in range(2, num + 1):
        ele = fibonacci[-1] + fibonacci[-2]
        fibonacci.append(ele)

    return fibonacci

def is_prime(num):
    if num > 1:
        for i in range(2, num // 2 + 1):
            if (num % i) == 0:
                return False
        else:
            return True
   
    else:
        return False


def PRINT(fibonacci):
    for ele in fibonacci:
        if not is_prime(ele) and ele % 5 != 0:
            print(ele, end=" ")
        else:
            print(0, end=" ")


num = int(input())

fibonacci = getFibo(num)
PRINT(fibonacci)




