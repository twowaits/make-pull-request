def fibonacci(n):
	l=[1]
	a = 0
	b = 1
	if n <= 0:
		print("Incorrect input")
	elif n == 1:
		print(b) 
	else:
		for i in range(1,n):
			c = a + b
			a = b
			b = c
			if b%5==0:
				l.append(0)
			else:
				l.append(b)
		isPrime(l) 



def isPrime(l):  
	l1=[]
	for n in l:
		flag=0
		if n <= 1:
			pass
		for i in range(2,n):
			if n % i == 0:
				flag=1
				break
		if flag==0 and n>2:
			l1.append(0)
		else:
			l1.append(n)
	print(l1)



	
fibonacci(12)
print()
fibonacci(27)	
	
	

