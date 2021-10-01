def isprime(x):
    if x>1:
        for i in range(2,int(x/2)+1):
            if(x%i==0):
                return False
                break
        else:
            return True
    else:
        return False
        
x,y=0,1
n = int(input("limit:"))
sum=0
if n<=0:
    print("invalid")
else:
    for i in range(n):

        
        x=y
        y=sum
        sum=x+y
        if ( isprime(sum)==True):
            print("0")
        elif(sum%5==0):
            print("0")
        else:
            print(sum)

