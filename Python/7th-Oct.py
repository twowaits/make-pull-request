def number(num):
	s=str(num)
	if len(s)==1:
		print(num)
	elif len(s)==2:
		print(s[-2],"Ten",s[-1])
	elif len(s)==3:
		print(s[-3],"Hundreds",s[-2],"Tens and",s[-1])
	elif len(s)==4:
		print(s[-4],"Thousands",s[-3],"Hundreds",s[-2],"Tens and",s[-1])
	elif len(s)==5:
		print(s[-5:-3],"Thousands",s[-3],"Hundreds",s[-2],"Tens and",s[-1])
	elif len(s)==6:
		print(s[-6],"Lacs",s[-5:-3],"Thousands",s[-3],"Hundreds",s[-2],"Tens and",s[-1])
	elif len(s)==6:
		print(s[-6:-3],"Lacs",s[-5:-3],"Thousands",s[-3],"Hundreds",s[-2],"Tens and",s[-1])
	elif len(s)==7:
		print(s[-7:-5],"Lacs",s[-5:-3],"Thousands",s[-3],"Hundreds",s[-2],"Tens and",s[-1])
	else:
		print(s[:-7],"Crores",s[-7:-5],"Lacs",s[-5:-3],"Thousands",s[-3],"Hundreds",s[-2],"Tens and",s[-1])


n=int(input("Enter the Number : "))
if(n<0):
    print("Enter positive value")
else:
    number(n)
