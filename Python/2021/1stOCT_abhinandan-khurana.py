from math import sqrt
nterms = int(input())
n1, n2 = 1, 1
count = 0


lst= []
while count < nterms:
  lst.append(n1)
  nth = n1 + n2
  n1 = n2
  n2 = nth
  count += 1


def prime(a):
  flag = True
  if(a > 1):
    for i in range(2, int(sqrt(a)) + 1):
        if (a % i == 0):
            flag = False
            break
    if(a % 5 == 0):
      flag = True
  return flag

k = set(lst)
k = list(lst)
for i in lst:
  if(prime(i)):
    k.remove(i)


for i in range(2,len(lst)):
  if(lst[i] in k):
    continue
  else:
    lst[i] = 0
print(lst)
