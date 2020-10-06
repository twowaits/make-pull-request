def Prime(num):
 if(num==1):
  return 1
 else:
     for i in range(2, num): 
       if (num % i) == 0: 
         return 1
         break
     else:
       return 2

n = int(input("Enter the number of terms  "))
a, b = 0, 1
count = 0

if n <= 0:
   print("Please enter a positive integer")
elif n == 1:
   print("Fibonacci sequence ",n)
   print(b)
else:
   print("Fibonacci sequence:")
   for i in range(a ,n):
       sum = a+ b
       y=Prime(b)
       
       if (b%5) == 0:
         print(0  )
         
       elif y == 2:
         print(0 )
         
       else:
         print(b )
       
       a = b
       b = sum
