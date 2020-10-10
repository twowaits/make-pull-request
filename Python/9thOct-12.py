def GCD():
    n1= int(input('enter first number: '))
    n2= int(input('enter second number: '))
    f1=1
    f2=1
    if n1>=1 and n2>=1:                               # checking if the numbers are positive or not
        
        for i in range(1, n1+1):                      # factorial of first number
            f1=f1*i
            i+=1
    
        for j in range(1, n2+1):                      # factorial of second number
        
            f2=f2*j
            j+=1
        
        while(f2):                                    # applying euclidian lemma method or euclidian algorithm
            f1,f2=f2,f1%f2
            
        print(f1)
    
    else:
        print("Please enter a non zero positive number")
        
GCD()