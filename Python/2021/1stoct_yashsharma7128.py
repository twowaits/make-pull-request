# Program to display the twisted Fibonacci sequence up to n-th term

nterms = int(input("How many terms u want in series? "))


number1, number2 = 1, 1
print(number1)

for num in range(nterms+1):
   flag = 1
   for i in range(2,number2/2):
     if (number2 % i) == 0:
        flag = 0
        break

   if (number2 % 5 == 0 or flag == 1 and number2 != 1):
       print(", 0")
   elif flag ==0:
       print(", " + number2)
   else:
       print(", "+ number2)

   sum = number1 + number2
   number1 = number2
   number2 = sum

