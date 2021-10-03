#Taking input from the user like :- 7 16
num,list1=list(map(int,input().split()))

#Printing the pattern
for i in range(1,num+1):
	print("  "*(i-1),end="")
	it=i
	while it<=list1:
		print(it,end="")
		v2=it%(num-1)
		if(v2==0): v2=(num-1)
		it+=(num-v2)*2
		print("  "*((num-v2)*2-1),end="")
	print()
