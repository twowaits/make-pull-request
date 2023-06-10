def rev(s):
	str=" "
	for i in s:
		str=i+str
	return str
s=input("enter")
answer = rev(s)
print(answer)
