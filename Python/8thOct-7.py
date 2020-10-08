
def hollow(r):
    for i in range(r-1):
        for j in range(r-i):
            print(' ', end='') 
        for j in range(2*i+1):
            if j==0 or j==2*i or i==r-1:
                print('*',end='')
            else:
                print(' ', end='')
        print() # print new line
    print(' ',end='')
    for i in range(2*r-1):
            if i%2==0:
                print('*',end='')
            else:
                print(' ', end='')
    print() # print new line

try:
    row = int(input('Enter number of rows: '))
    hollow(row)

except:
    print("Please re-run the program and enter valid number.")
