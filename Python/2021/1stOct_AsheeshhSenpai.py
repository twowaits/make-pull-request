def Fibonacci_series(Number: int): #Function to get elements of fibonacci sequence
    if(Number == 0):
        return 1
    elif(Number == 1):
        return 1
    else:
        return (Fibonacci_series(Number - 2) + Fibonacci_series(Number - 1))

def is_prime(n: int): #Function to check if any element is prime
    flag = False
    if n > 1:
        for i in range(2, n):
            if (n % i) == 0:
                # if factor is found, set flag to True
                flag = True
                break
        if flag:
            return False #return False if factor found
        else:
            return True #return True if no factor => Prime

n = int(input("Enter the value of n: "))

fibo_list=[] #list to store fibonacci elements

for n in range(0, n):
    fibo_list.append(Fibonacci_series(n))

for i in range (0, len(fibo_list)):
    if is_prime(fibo_list[i]):
        fibo_list[i] = 0 #If prime replace with 0
    elif fibo_list[i]%5 == 0:
        fibo_list[i] = 0 #If multiple of 5 replace with 0

for element in fibo_list:
    print(element, end=" ") #Final print
