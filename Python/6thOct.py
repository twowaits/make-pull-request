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
			if b%5==0 or b==3 or b==13:
				l.append(0)
			else:
				l.append(b)
		return(l) 


print(fibonacci(12))
print()
print(fibonacci(27))   	

