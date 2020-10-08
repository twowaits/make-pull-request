def PrintPattern(n):
    for i in range(n-1):
        for j in range(n-i):
            print(' ', end='') 
        for j in range(2*i+1):
            if j==0 or j==2*i or i==n-1:
                print('*',end='')
            else:
                print(' ', end='')
        print()
    print(' ',end='')
    for i in range(2*n-1):
            if i%2==0:
                print('*',end='')
            else:
                print(' ', end='')
    print() 
n=int(input())
PrintPattern(n)