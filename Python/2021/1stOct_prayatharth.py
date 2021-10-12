# Program to Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.

m = int(input("Please enter terms:"))
n = m - 2

# first two terms
a, b = 1, 1
count = 0


#function for checking prime
def prim(n):
   if n>1:
      for i in range(2,n):
         if n%i==0:
            return False
      else:
         return True

   else:
      return False


#checking if n is negative
if n <= 0:
   print("Please enter a positive integer")

elif n == 1:
   print("Special Finobacci series",n,":")
   print(a)
#main Special Series
else:
   print("Special Fibonacci series:")
   print(a)
   print(b)
   while count < n:
      c = a + b

      if not prim(c) and c % 5 !=0 :
         print(c)

      else:
         print(0)
       # update values
      a = b
      b = c
      count += 1