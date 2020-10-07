def number(num):
	s=str(num)
	if len(s)==1:
		print(num)
		
	elif len(s)==2:
	    if(s[-2]=="1"):
	        print(s[-2],"Ten",s[-1])
	    else:
		    print(s[-2],"Tens",s[-1])
	
	elif len(s)==3:
	    if(s[-3]=="1"):
	        print(s[-3],"Hundred",s[-2],"Tens and",s[-1])
	    else:
		    print(s[-3],"Hundreds",s[-2],"Tens and",s[-1])
	
	elif len(s)==4:
	    if(s[-4]=="1"):
	        print(s[-4],"Thousand",s[-3],"Hundreds",s[-2],"Tens and",s[-1])
	    else:
		    print(s[-4],"Thousands",s[-3],"Hundreds",s[-2],"Tens and",s[-1])
	
	elif len(s)==5:
		print(s[-5:-3],"Thousands",s[-3],"Hundreds",s[-2],"Tens and",s[-1])
	
	elif len(s)==6:
	    if(s[-6]=="1"):
		    print(s[-6],"Lac",s[-5:-3],"Thousands",s[-3],"Hundreds",s[-2],"Tens and",s[-1])
	    else:
		    print(s[-6],"Lacs",s[-5:-3],"Thousands",s[-3],"Hundreds",s[-2],"Tens and",s[-1])
	elif len(s)==7:
		print(s[-7:-5],"Lacs",s[-5:-3],"Thousands",s[-3],"Hundreds",s[-2],"Tens and",s[-1])
	else:
	    if(s[-8]=="1"):
		    print(s[:-7],"Crore",s[-7:-5],"Lacs",s[-5:-3],"Thousands",s[-3],"Hundreds",s[-2],"Tens and",s[-1])
	    else:
		    print(s[:-7],"Crores",s[-7:-5],"Lacs",s[-5:-3],"Thousands",s[-3],"Hundreds",s[-2],"Tens and",s[-1])


n=int(input("Enter the Number : "))
if(n<0):
    print("Enter positive value")
else:
    number(n)
