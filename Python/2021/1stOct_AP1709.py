n = int(input())


def isPrime(n): # Returns boolean for a given integer
	if n==1 or n==2 or n==3:
		return True
	for i in range(2,n//2):
		if n%i==0:
			return False
	return True

def solve(n): # Main implementation of the twisted fibonacci
	x = [None]*(n)
	x[0]=1
	x[1]=1
	y = [None]*(n)
	y[0]=1
	y[1]=1
	for i in range(2,n):
		z = x[i-1]+x[i-2]
		x[i] = z
		if z%5==0 or isPrime(z):
			y[i] = 0
		else:
			y[i] = z
	print(*y)

solve(n) # Driver code
