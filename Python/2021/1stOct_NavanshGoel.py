import math

#check if number is prime
def isPrime(num):
    #if num is 1 then its not prime
    if num==1:
        return False
    i = 2
    #iterate from 2 to square root of number and if this has any divisors, then its not prime
    while i*i <= num:
        if num%i==0:
            return False
        i+=1
    #if the control reaches this statement, it is Prime
    return True

#to check prime and create fibonacci series simultaneously can be speed inefficient
#so we use the formula to find the nth fib number
def fibWithATwist(n):
    series = []
    #calculate constant phi
    phi = (1+math.sqrt(5))/2
    #get fibonacci value using the formula, and then check if number of prime or multiple of 5
    for i in range(1,n+1):
        num = round(pow(phi,i)/math.sqrt(5))
        if isPrime(num) or num%5==0:
            series.append(0)
        else:
            series.append(num)
    return series

def main():
    n = int(input("Enter value of n: "))
    for i in fibWithATwist(n):
        print(i, end=" ")

if __name__=="__main__":
    main()