def isPrime(x):
 
    if (x <= 1):
        return False

    for i in range(2, x):
        if (x % i == 0):
            return False
    return True

n=int(input())
series_old=[1,1]
series_new=[1,1]

pointer1=0
pointer2=1

for i in range(n-2):
  new_num=series_old[pointer1]+series_old[pointer2]
  series_old.append(new_num)

  if(isPrime(new_num) or new_num%5==0):
    series_new.append(0)
  else:
    series_new.append(new_num)
  
  pointer1=pointer1+1
  pointer2=pointer2+1

print(*series_new)