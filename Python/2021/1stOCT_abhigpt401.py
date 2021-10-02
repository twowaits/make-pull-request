






def isprime(num):
    for i in range(2,num):
       if (num % i) == 0:
           return False
       else:
           return True
n = int(input())
a=0
b=1
list = []
for i in range(0,n):
    c=a+b
    list.append(c)
    a=b
    b=c
print(list)
for index, elem in enumerate(list):
    if isprime(elem) == True:
        list[index]=0
print(list)
        