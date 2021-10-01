def answer(number):
	listfib = [None]*(number)
	listfib[0]=1
	listfib[1]=1
	n = [None]*(number)
	n[0]=1
	n[1]=1
	for i in range(2,number):
		ans = listfib[i-1]+listfib[i-2]
		listfib[i] = ans
		if ans%5==0 or checkPrime(ans):
			n[i] = 0
		else:
			n[i] = ans
	print(*n)
	
def checkPrime(number):
	if number==1 or number==2 or number==3:
		return True
	for i in range(2,number//2):
		if number%i==0:
			return False
	return True

number = int(input())
answer(number)
