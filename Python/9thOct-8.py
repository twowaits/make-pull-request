def fact(number):
    if(number==0 or number==1):
        return 1
    else:
        return number*fact(number-1)
def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b,a%b)
n,m=map(int,input().split())
n1=fact(n)
m1=fact(m)
result=gcd(n1,m1)
print(result)               
                
            
