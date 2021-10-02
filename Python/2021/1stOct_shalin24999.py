def input_function():
    inp = int(input("Enter number"))
    if inp<0:
        print("Enter proper input greater than 0")
        return 0
    else:
        return inp

def fibonacci_function(n):
  if n == 0:
      return 0
  elif n == 1:
      return 1
  else:
      return fibonacci_function(n-1) + fibonacci_function(n-2)
     
def check_prime_function(num):
    if num == 2:
        return True
    elif num % 2 == 0 or num <= 1:
        return False
    for i in range(2,int(num**(0.5))):
        if num % i == 0:
            return False
    return True
    
#Taking input
input_no = input_function()
#Calling fibonacci_function
for i in range(input_no):
  f = fibonacci_function(i+1)
  #checking prime or multiple of 5
  if(check_prime_function(f) or f%5 == 0):
    print("0",end=" ")
  else:
    print(str(f),end=" ")
    
      
