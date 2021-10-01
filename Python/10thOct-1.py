# function to reverse a given string
def rev(s):                        	# Defining a new function
	str=" "			   	# declaring an empty string to store reversed string
	for i in s:		  	# assinging a for loop 
		str=i+str	   	# storing each character one by one so the order gets reversed 
	return str		  	# returning the new reversed string 
s=input("Enter a string/n")	   	# asking input for an string to reverse
print("The original string is: ",s)  
print("The reverse string is",rev(s))	# displaying the revesed string 
