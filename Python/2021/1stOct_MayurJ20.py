def fibo(nterms):
  # first two terms
  n1, n2 = 1, 1
  count = 0
  if nterms <= 0:
     return 0
  elif nterms == 1:
     print(n1)
  else:
     while count < nterms:
         if isPrime(n1) or n1%5==0:
            print(0)
         else:
            print(n1)
         nth = n1 + n2
         n1 = n2
         n2 = nth
         count += 1

def isPrime(n):
  if n>1:
    for i in range(2,n//2+1):
      if n%i==0:
        return 0
    return 1
  return 0

nterms = int(input())
fibo(nterms)
