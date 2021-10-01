from math import *


def fibmod(n):
	if n==1:
		return 1
	elif n==0:
		return 0
	else:
		return fibmod(n-1)+fibmod(n-2)
def prime(x):
	s=floor(sqrt(x))
	count=0
	if x>1:
		for i in range(2,s+1):
			if(x%i==0):
				count+=1
		if(count==0):
			return True
		else:
			return False

n = int(input("Enter number:"))

for i in range(1,n+1):
	x=fibmod(i)
	if (prime(x) or x%5==0):
		print(0,end=' ')
	else:
		print(x,end=' ')
