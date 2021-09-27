#Issue
# binary of a decimal in a given range

number=int(input("please enter the range upto which you want to print binary numbers :- ")) #taking the input from the user upto which he would like to print the binary
l=[] #declaring l to be a list type
for i in range(number+1): #for loop to convert a range of decimal to binary and append them to the declared list 
  a=str(bin(i))   #converting to binary
  l.append(a)    #appending to list
for i in l:            #to print the output in a horizontal line
  print(i[2:],end=" ")
