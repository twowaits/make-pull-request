def fibonacci(num):

	x1 = 0
	x2 = 1
	if num <= 0:
		print("Enter a positive Integer!")
	elif num == 1:
		print(x2)
	else:
		for i in range(1,num):
			t = x1 + x2
			x1 = x2
			x2 = t
			if x2%5==0 or Fiboprime(x2):
				print(0,end=" ")
			else:
				print(x2,end=" ")
		print(end="")

def Fiboprime(n):
        if n > 1:
           for i in range(2,n):
               if (n % i) == 0:
                   return False
           else:
               return True
        else:
           return False

fibonacci(int(input("")))
