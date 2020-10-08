# Print Hollow Pyramid Pattern Using Stars

def hollowPyramid(r):
    for i in range(r):
        for j in range(r-i):
            print(' ', end='') # print required space while staying in same line

        for j in range(2*i+1):
            if j==0 or j==2*i or i==r-1:
                print('*',end='')
            else:
                print(' ', end='')
        print() # print new line

try:
    row = int(input('Enter number of rows: '))
    hollowPyramid(row)

except:
    print("Please re-run the program and enter valid number.")
