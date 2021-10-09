#add code here by chidambaranathan (chidam333)
a=int(input("Enter the first no"))
b=int(input("Enter the second no "))
fa=1
fb=1
for i in range(1,a+1):
    fa*=i
for j in range(1,b+1):
    fb*=j    
import math
gcd=math.gcd(fa,fb)
print(gcd)
