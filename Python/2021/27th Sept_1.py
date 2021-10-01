def dec_bin(n):
   return bin(n).replace("0b","")
   
n = int(input("Enter the number "))

for i in range (1,n+1):
    print(dec_bin(i))
