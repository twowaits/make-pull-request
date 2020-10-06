def fibo(n):
	l=[1]
	a = 0
	b = 1
	  if n <= 0:
	    print("Enter the Integer")
	  elif n == 1:
        	print(b) 
	  else:
              for i in range(1,n):
		sum = a + b
		a = b
		b = sum
	
	if b%5==0 or Prime(b):
					
	   l.append(0)
	else:
           l.append(b)
	    print(l) 
		
	def Prime(num):  
          if num > 1:
            for i in range(2,num):
	       if (num % i) == 0:
	         return False
	       else:
	         return True
	       else:
	         return False
		
fibo(int(input("Enter Number Of terms: ")))
