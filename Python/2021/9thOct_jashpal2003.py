def gcd_(a1,b1):
	if(b1==0):
		return a1
	else:
		return gcd_(b1,a1%b1)
def factorial(n):
	# single line to find factorial
	return 1 if (n == 1 or n == 0) else n * factorial(n - 1);

a = int(input("Enter number1 :"))
b = int(input("Enter number2 : "))
f =	gcd_(a,b)
print(factorial(f))
