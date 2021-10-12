try:
    def isprime(val):
        if val > 1:
            for i in range(2, int(val/2)+1):
                if (val % i) == 0:
                    return False
            return True
        return False
    def solve(n):
        if n==0:
            print("Enter number greater than 0")
        elif n==1:
            print(1)
        elif n==2:
            print("1 1")
        else:
            first=1
            second=1
            print(first,second,end=' ')
            for i in range(2,n):
                third=first+second
                if (isprime(third) == True) or (third%5==0):
                    print("0",end=' ')
                else:
                    print(third,end=' ')
                first=second
                second=third

        
    if __name__=="__main__":
        n=int(input())
        solve(n)
except:
    pass
