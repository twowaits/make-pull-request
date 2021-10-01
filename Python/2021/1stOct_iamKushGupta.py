def TwistFibbonacci(n):
    first_term = 0
    second_term = 1
    for i in range(0,n):
        
        a = 0
        
        if(i == 0):
            a = first_term
        
        elif(i == 1):
            a = second_term
        
        else:
            b = first_term + second_term
            
            if(b%5 == 0):
                a = 0
            else:
                k = 0
                for i in range(1, b+1):
                    if(b%i == 0):
                        k = k + 1
                if(k == 2):
                    a = 0
                else:
                    a = b
            second_term = b
            first_term = second_term
            
        print(a, end = " ")



n = int(input("Enter :"))
TwistFibbonacci(n)