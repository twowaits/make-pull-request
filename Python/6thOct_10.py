# Python program to generate Fibonacci series upto n value and replace all prime and multiples of 5 by 0


def isPrime(num):  
        if num > 1:
           for i in range(2,num):
               if (num % i) == 0:
                   return False
           else:
               return True
        else:
           return False

def fib(n):
	
	n1 = 0
	n2 = 1
	if n <= 0:
		print("Enter a non-negative Integer!")
	elif n == 1:
		print(n2) 
	else:
		for i in range(1,n):
			t = n1 + n2
			n1 = n2
			n2 = t
			if n2%5==0 or isPrime(n2):
				print(0,end=" ")
			else:
				print(n2,end=" ")
		print(end="")

fib(int(input("")))

