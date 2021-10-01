n=int(input("Enter the range\n"))
a=0
b=1
print(a)
print(b)
while (n-2)>0:
    c=a+b
    if(c%5==0):
        print("0")
    else:    
        print(c)
    a=b
    b=c
    n=n-1
