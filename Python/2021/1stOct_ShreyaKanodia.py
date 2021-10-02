class Solution():
    def isprime(n):
        if(n==1):
            return False
        for i in range(2,int(n**(1/2))+1):
            if(n%i==0):
                return False
                break
        return True 

    def print_fibonacci(self,n):
        a=0
        if(n==0):
            print(a)
        b=1
        if(n>=1):
            print(b,end=" ")
        for i in range(2,n+1):
            c=a+b
            if(Solution.isprime(c) or c%5==0):
                print('0',end=" ")
            else:
                print(c,end=" ")
            a=b
            b=c
    
s= Solution()
n=int(input())
s.print_fibonacci(n)
