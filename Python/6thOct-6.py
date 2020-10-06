def fibonacci(n):
	l=[1]
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
				l.append(0)
			else:
				l.append(n2)
		print(l) 

def isPrime(num):  
        if num > 1:
           for i in range(2,num):
               if (num % i) == 0:
                   return False
           else:
               return True
        else:
           return False

fibonacci(int(input("Enter Number Of terms: ")))
	
	

