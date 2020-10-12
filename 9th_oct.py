import math 
  
def GCDandFactorial(a,b) : 
    return math.factorial(min(a,b)) 
  
#main 
a = int (input())
b= int(input())
print(GCDandFactorial(a,b)) 
