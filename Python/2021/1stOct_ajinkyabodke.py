#Program to Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0


#main
n=int(input("Enter :"))
specialfibonacci(n) 

def specialfibonacci(n):
    a=0
    b=1
    for i in range(0,n):
        d=0
        if(i==0):
            d=a
        elif(i==1):
            d=b
        else:
            c=a+b
            if(c%5==0):
                d=0
            else:
                k=0
                for i in range(1,c+1):
                    if(c%i==0):
                        k+=1
                if(k==2):
                    d=0
                else:
                    d=c
            a=b
            b=c
        print(d,end=",")
#end of program
