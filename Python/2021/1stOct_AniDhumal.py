#fibonacci with a twist function
def fibo_with_a_twist(n):
    num1=0
    num2=1
    print(num2)
    for i in range (1,n):
        temp=num1+num2
        if temp%5==0 or isPrime(temp):
            print("0")
        else:
            print(temp) 
        num1=num2
        num2=temp

#function to check if number is prime 
def isPrime(t):
    if t==1:
        return False
    t_half=int(t/2)
    for i in range(2,t_half):
        if(t%i==0):
            return False
    
    return True

n=int(input())
fibo_with_a_twist(n) #Call to the fibonacci function
