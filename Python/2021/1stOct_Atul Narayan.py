#compound interest calculator

principal= int(input('Enter Principal:'))
print ('your principal is', principal)

rate=  int(input('Enter Rate:'))
print ('your rate is' ,rate)


time= int(input('Enter Time:'))

print ('your time is', time)



Amount = principal * (pow((1 + rate / 100), time))
print ('your Amount is ' , Amount)
