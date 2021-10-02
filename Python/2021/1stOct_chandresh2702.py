# Program to display the Fibonacci sequence up to n-th term

def is_prime_number(x):
    if x >= 2:
        for y in range(2,x):
            if not ( x % y ):
                return False
    else:
	    return False
    return True
nterms = int(input("How many terms? "))

# first two terms
n1, n2 = 1, 1
count = 0

# check if the number of terms is valid
if nterms <= 0:
   print("Please enter a positive integer")
elif nterms == 1:
   print("Fibonacci sequence upto",nterms,":")
   print(n1)
else:
   print("Fibonacci sequence:")
   while count < nterms:
        if n1%5==0 or is_prime_number(n1):
           print(0)
        else:   
            print(n1)
        nth = n1 + n2
        # update values
        n1 = n2
        n2 = nth
        count += 1