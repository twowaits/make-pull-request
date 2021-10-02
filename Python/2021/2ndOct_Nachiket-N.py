rows,columns=list(map(int,input().split()))
for i in range(1,rows+1):
	print(" "*(i-1),end="")
	x=i
	while x<=columns:
		print(x,end="")
		v2=x%(rows-1)
		if(y==0): y=(rows-1)
		x+=(rows-y)*2
		print(" "*((rows-y)*2-1),end="")
	print("\n")