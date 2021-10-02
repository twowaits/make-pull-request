n = int(input())
a, b = 1, 1
def isprime(a):
    if a < 2:
        return False
    else:
        for i in range(2, int(a//2)):
            if a%i == 0:
                return False
        else:
            return True

for i in range(n):
    if isprime(a) == True or a % 5 == 0:
        print(0, end = " ")
    else:
        print(a, end = " ")
    a, b = b, a+b
