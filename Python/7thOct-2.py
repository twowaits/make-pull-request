def number(num):
	l=[]
	while num>0:
		m=num%10
		num= num//10
		l.append(m)
	print(l)
	name(l)

def name(s):
	n1=[" "," Ten and "," Hundred "," Thousand ",""," Lac ",""," Crore ","",]
	n2=[" "," Tens and "," Hundreds "," Thousands ",""," Lacs ",""," Crores ","",]
	st=''
	for i in range(len(s)-1, -1 ,-1):
		if s[i]>1:
			st=(st+str(s[i])+n2[i])
		else:
			st=(st+str(s[i])+n1[i])
	print(st)

	
n=int(input("Enter the Number : "))
number(n)