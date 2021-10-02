'''Take input the value of 'n', upto which you will print.
-Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.
Sample Input :
12
27

Sample Output :
1 1 0 0 0 8 0 21 34 0 0 144
1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418'''

import math
n=int(input())
n1=1
n2=1
count=0
def isprime(num):
    if num<=1:
        return False
    if num==2:
        return True
    if num>2 and num%2==0:
        return False
    x=int(math.sqrt(num))
    for i in range(3,x,2):
        if(num%i==0):
            return False
    return True    
        
    
if n==1:
    print(n1)
else:
    while (count<n):
     if not isprime(n1) and n1%5!=0:
         print(n1,end=' ')
     else:
         print(0,end=' ')
     sum=n1+n2
     n1=n2
     n2=sum
     count=count+1

