def triangle():
    
    while True:
        
        try:                                                    #using try except block to ensure that user enters only a number
            
            row = int(input('Enter number of rows required: ')) #taking input for number of rows
            
            for i in range(row-1):
    
                for j in range(row-i):
                    print(' ', end='')                          # printing space required and staying in same line
    
                for j in range(2*i+1):
        
                    if j==0 or j==2*i or i==row-1:
                        print('*',end='')
        
                    else:
                        print(' ', end='')
                print()                                         # printing new line

            for i in range(0, 2*row) :
        
                if i%2==0:
                    print(' ', end ='')
        
                else:
                    print ('*', end = '') 
                    
        except ValueError:                                       #except block
                
                print("This isn't a number,please enter a number")
                continue
        else:
            break
            
triangle()