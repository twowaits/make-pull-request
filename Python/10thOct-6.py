# printing the reverse of the input string
def rev():
    while True:
        
        s= input('Enter a word you want to reverse: ')
    
        if len(s)==0 or len(s)==1:
            print('please enter a string of atleast 2 characters ')
            continue
        else:
            s=s[::-1]       #reversing the string
            break
    print(s)                #printing the output

rev()    