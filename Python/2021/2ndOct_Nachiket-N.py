def solve(rows, columns):
	for i in range(1,rows+1):
		print(" "*(i-1),end="")
		x=i
		while x<=columns:
			print(x,end="")
			y=x%(rows-1)
			if(y==0): y=(rows-1)
			x+=(rows-y)*2
			print(" "*((rows-y)*2-1),end="")
		print()
	return

rc= list(map(int,input().split()))
rows, columns = rc[0] , rc[1]
solve(rows, columns)