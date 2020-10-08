class bcolors:
    FAIL = '\033[91m'
    ENDC = '\033[0m'

n = int(input())
for i in range(n):
    for j in range(n-i):
        print(' ', end='')
    for j in range(2*i+1):
        if j == 0 or j == 2*i or i == n-1:
            print(f"{bcolors.FAIL}*{bcolors.ENDC}", end='')
        else:
            print(' ', end='')
    print()
