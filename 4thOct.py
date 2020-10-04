inputs = input().split()
rows = int(inputs[0])
total = int(inputs[1])

for i in range(1, rows+1):
   factor = (rows - 1) *2
 
   for j in range(1,total+1):
     isFactor = (i == j) or (j-i)%factor == 0

     #for first and last rows
     if(i == 1 or i == rows):
        isElement = isFactor
     #for middle rows
     else:
        isElement = isFactor or (j+(i-2))%factor == 0 #i is 2 or more
     
     if(isElement):
        print(j,end="")
     else:
        print(" ",end="")
     
   #line break
   print()


