starting_num1,starting_num2 = 1,1
fibo_term = 0

#Function to check primeness
def is_prime(num):
    for i in range(2,num//2+1):
        if num%i==0:
            return False
            break
    else:
        return True

#function to check divisibility by 5
def is_divisible_by_5(num):
    if num%5 == 0:
        return True
    else:
        return False
        
num = int(input("Enter the term to which you want to find the special Fibonacci Series: "))
print(starting_num1, starting_num2, end = ' ') #to print the first two entries of the series
for i in range(num-2):#num-2 since we have already printed the first 2
    fibo_term = starting_num1+starting_num2
    if is_prime(fibo_term) or is_divisible_by_5(fibo_term): #checks if the conditions are met
        print(0,end = ' ') 
    else:
        print(fibo_term,end = ' ')
    starting_num1 = starting_num2
    starting_num2 = fibo_term
