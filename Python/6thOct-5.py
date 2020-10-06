def isPrime(num):
 if(num==1):
  return 1
 else:
     for i in range(2, num): 
       if (num % i) == 0: 
         return 1
         break
     else:
       return 2

nterms = int(input("How many terms? "))
n1, n2 = 0, 1
count = 0

if nterms <= 0:
   print("Please enter a positive integer")
elif nterms == 1:
   print("Fibonacci sequence upto",nterms,":")
   print(n1)
else:
   print("Fibonacci sequence:")
   while count < nterms:
       nth = n1 + n2
       x=isPrime(n2)
       
       if (n2%5) == 0:
         print(0)
         
       elif x == 2:
         print(0)
         
       else:
         print(n2)
       # update values
       n1 = n2
       n2 = nth
       count += 1
