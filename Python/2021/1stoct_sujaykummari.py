s = input("Enter your value: ") 
def reverse(s): 
  str = "" 
  for i in s: 
    str = i + str
  return str
print ("The reversed string(using loops) is : ",end="") 
print (reverse(s)) 
#done by @sujaykummari
