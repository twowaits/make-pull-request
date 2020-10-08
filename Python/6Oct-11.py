# Program to display the Fibonacci sequence up to n-th term
def fib():
    fiblist=[]
    
   
    j=0
    
    n= int(input("Enter the desired number of terms:"))
    # first two terms
    n1, n2 = 0, 1
    count = 0

    # check if the number of terms is valid
    if n <= 0:
       print("Please enter a positive integer")
    elif n == 1:
       print("Fibonacci sequence upto",n,":")
       print(n1)
    else:
       print("Fibonacci sequence:")
       while count < n:
            if n2%5==0:
                fiblist.append(0)
            else:
                fiblist.append(n2)
                
            nth = n1 + n2
            # update values
            n1 = n2
            n2 = nth
            count += 1
    
    #checking prime
            
    for num in fiblist:
        c=0
        i=2
        if num>1:
            while i<num:
                if num%i==0:
                    c+=1
                i+=1
            if c==0:
                fiblist[j]=0
           
        else:
            pass
        j+=1
            
   
    print(fiblist)
    
fib()