def fibbo_twist(n):
   tb=[1,1]
   for i in range(2,n+1):
      tb.append(tb[i-1]+tb[i-2])
   return tb

def isprime(n):
   if n==1:
      return False
   for i in range(2,int(n**0.5)+1):
      if n%i==0:
         return False
   return True

n=int(input())
output=fibbo_twist(n)

for i in range(len(output)):
   if output[i]%5==0 or isprime(output[i]):
      output[i]=0

print(output)
