def fib(n):
    p=0
    a = 0
    b = 1
    sum = 0
    count = 0
    while (count < n):
        count += 1
        sum=0
        if count==0:
            sum=a
        elif count==1:
            sum=b
        else:
            temp=a+b
            if (temp % 5 == 0):
                sum=0
            else:
                for i in range(1,temp+1):
                    if (sum % i) == 0:
                        p = p + 1
                if p == 2:
                    sum=0

                else:
                    sum=temp
            a=b
            b=temp
        print(sum,end=" ")
        
'''main code'''

n = int(input( ))
fib(n)
