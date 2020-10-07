# Program to display the fibonacci series up to n-th term replacing prime
# numbers and multiple of 5 by 0

nterms = int(input("How many terms you want to print upto? "))

def fibonacci(nterms):
    lst=[1]

    # first two terms
    n1, n2 = 0, 1

    # check if the number of terms is valid
    if nterms <= 0:
       print("Please enter a valid number")
    elif nterms == 1:
       print(n2)
    else:
        for i in range(1,nterms):
            nth=n1+n2
            # update n1 and n2
            n1=n2
            n2=nth

            # check if the number is multiple of 5
            if n2%5==0:
                lst.append(0)
            else:
                lst.append(n2)
        isPrime(lst)

#check prime number
def isPrime(lst):
    lst1=[]
    for n in lst:
        flag=0
        if n<=1:
            pass
        for i in range(2,n):
            if (n % i) == 0:
                flag=1
                break
        if flag==0 and n>1:
            lst1.append(0)
        else:
            lst1.append(n)
    print(lst1)

fibonacci(nterms)
