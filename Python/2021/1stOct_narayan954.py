def Fibonacci_series(Number):
    if(Number == 0): #if value of n is 0 
        return 0
    elif(Number == 1): #if value of n is 1
        return 1
    else:#if value of n is greater than 1 it uses recursive calls
        return (Fibonacci_series(Number - 2) + Fibonacci_series(Number - 1))
    
#taking input
n = int(input("Enter the value of 'n': "))
print("Fibonacci Series:", end = ' ')

#printing output
for n in range(0, n): 
    print(Fibonacci_series(n), end = ' ')
