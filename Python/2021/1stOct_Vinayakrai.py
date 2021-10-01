#Fibonacci Series with a Twist

def is_prime_number(x):
    if x >= 2:
        for y in range(2,x):
            if not ( x % y ):
                return False
    else:
	    return False
    return True
nterms = int(input("Enter the number of terms: "))

n1, n2 = 1, 1
count = 0

if nterms <= 0:
   print("Enter a positive integer")
elif nterms == 1:
   print("Fibonacci sequence:")
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
