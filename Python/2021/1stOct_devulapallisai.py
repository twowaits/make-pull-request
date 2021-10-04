# First take input n
# contributed by Sai Prachodhan Devulapalli Thanks for giving me a route

# Program to find whether prime or not
def primeornot(num):
    if num<2:return False
    else:
       #Just checking from 2,sqrt(n)+1 is enough reduces complexity too
        for i in range(2,int(pow((num),1/2)+1)):
            if num%i == 0:
                return False
        return True
# Program to find multiple of 5 or not


def multipleof5(n):
    if(n % 5 == 0):
        return True
    return False


n = int(input('Enter the value of n please'))

# Check whether n=0 or any invalid
if(n <= 0):
    print('Enter a number greater than 1 because there are no zero terms :(')

else:
   n1 = 0
   n2 = 1
   count=0
   while(count < n):
      if(multipleof5(n2) or primeornot(n2)):
         print(0,end=" ")
      else:
         print(n2,end=" ")
      nth = n1 + n2
        # update values
      n1 = n2
      n2 = nth
      count=count+1
