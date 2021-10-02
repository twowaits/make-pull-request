rows = int(input(" Enter the no. of rows : "))
cols = int(input(" Enter the no. of columns : "))

print("\n")
for i in range(1,rows+1):
	print("  "*(i-1),end=" ")
	a = i
	while a<=cols:
		print(a , end="")
		b = a % (rows-1)
		if(b==0): b=(rows-1)
		a+=(rows-b)*2
		print("  "*((rows-b)*2-1),end=" ")
	print("\n")

"""

Output:

 Enter the no. of rows : 7
 Enter the no. of columns : 16


 1                       13                       

   2                   12   14                   

     3               11       15               

       4           10           16           

         5       9               

           6   8                   

             7                       

"""
