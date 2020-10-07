#number to words

def num_to_words():
    lst=[]
    
    num = input("Enter a number of 10 digits or smaller:")
    
    if num.isdigit():
     #checking if the entered string is a number or not
        
        for i in num:
            lst.append(i)
        
        if len(num)==1:
            print(lst[0])
        
        elif len(num)==2:
            print(lst[0],'tens','and',lst[0])
        
        elif len(num)==3:
            print(lst[0],'hundred',lst[1],'tens','and',lst[2])
        
        elif len(num)==4:
            print(lst[0],'thousand',lst[1],'hundred',lst[2],'tens','and',lst[3])
        
        elif len(num)==5:
            s=lst[0]+lst[1]
            print(s,'thousand',lst[2],'hundred',lst[3],'tens','and',lst[4])
        
        elif len(num)==6:
            s=lst[1]+lst[2]
            print(lst[0],'lakh',s,'thousand',lst[3],'hundred',lst[4],'tens','and',lst[5])
        
        elif len(num)==7:
            s=lst[0]+lst[1]
            t=lst[2]+lst[3]
            print(s,'lakh',t,'thousand',lst[4],'hundred',lst[5],'tens','and',lst[6])
        
        elif len(num)==8:
            s=lst[1]+lst[2]
            t=lst[3]+lst[4]
            print(lst[0],'crore',s,'lakh',t,'thousand',lst[5],'hundred',lst[6],'tens','and',lst[7])
        
        elif len(num)==9:
            s=lst[0]+lst[1]
            t=lst[2]+lst[3]
            l=lst[4]+lst[5]
            print(s,'crore',t,'lakh',l,'thousand',lst[6],'hundred',lst[7],'tens','and',lst[8])
        
        elif len(num)==10:
            s=lst[0]+lst[1]+lst[2]
            t=lst[3]+lst[4]
            l=lst[5]+lst[6]
            print(s,'crore',t,'lakh',l,'thousand',lst[7],'hundred',lst[8],'tens','and',lst[9])
        
        else:
            print('Please enter a number of less than 10 digits')
    
    
    else:
        print('Please enter a valid number')
        

num_to_words()