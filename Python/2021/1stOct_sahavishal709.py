

def fib(n):
  if n==1 or n==2:
    return 1
  return fib(n-1)+fib(n-2)

def prime(n):
  if n>1:       #prime numbers are always greater then 1
    if n==2:    #2 is prime 
      return 0
    for i in range(2,n//2+1):  #checking for factors of number
      if n%i==0:
        return n
    else:
      return 0
  else:
    return n

def modified_fib(n):
  for i in range(1,n+1):
    k=fib(i)         #to get next fibonacci number
    req_num=prime(k) #Checking prime or not
    if req_num%5==0:       #if req_num is multiple of 5 return 0 else return req_num
      print(0,end=" ")
    else:
      print(req_num,end=" ")



modified_fib(12)

#modified_fib(27)