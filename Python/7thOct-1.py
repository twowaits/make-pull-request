def numberToWords(n):
	s=str(n)
	if len(s)==1:
		print(n)
	elif len(s)==2:
		print(s[-2],"tens",s[-1])
	elif len(s)==3:
		print(s[-3],"hundreds",s[-2],"tens and",s[-1])
	elif len(s)==4:
		print(s[-4],"thousands",s[-3],"hundreds",s[-2],"tens and",s[-1])
	elif len(s)==5:
		print(s[-5:-3],"thousands",s[-3],"hundreds",s[-2],"tens and",s[-1])
	elif len(s)==6:
		print(s[-6],"lacs",s[-5:-3],"thousands",s[-3],"hundreds",s[-2],"tens and",s[-1])
	elif len(s)==7:
		print(s[-7:-5],"lacs",s[-5:-3],"thousands",s[-3],"hundreds",s[-2],"tens and",s[-1])
	else:
		print(s[:-7],"crores",s[-7:-5],"lacs",s[-5:-3],"thousands",s[-3],"hundreds",s[-2],"tens and",s[-1])


try:
	num=int(input("Enter the number: "))
	numberToWords(num)
except:
	print("Please run the program again and enter the valid number.")
