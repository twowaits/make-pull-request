nterms = int(input("How many terms? "))

# first two terms
n1, n2 = 1, 1
count = 0

# check if the number of terms is valid
if nterms <= 0:
   print("Please enter a positive number.")
elif nterms == 1:
   print(n1)
else:
    while count < nterms:
       print(n1,end=' ')
       nth = n1 + n2
       # update values
       n1 = n2
       n2 = nth
       count += 1
