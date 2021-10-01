from math import sqrt as root

def get_fibonacci_at_pos(idx):
    if idx==0:return 0
    elif idx<3:return 1
    else:return get_fibonacci_at_pos(idx-2)+get_fibonacci_at_pos(idx-1)
    
def is_prime(num):
    if num<2:return False
    else:
        for i in range(2,int(root(num)+1)):
            if num%i == 0:
                return False
        return True

n = abs(int(input("Enter the value of 'n' > ")))
for i in range(1,n+1):
    f = get_fibonacci_at_pos(i)
    if is_prime(f) or f%5 == 0:
        print(0,end=" ")
    else:
        print(f, end=" ")
print()



