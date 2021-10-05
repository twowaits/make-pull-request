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


