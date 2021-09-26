#!/bin/python3
n=int(input())
list = [] #created a list to store values
while (n > 0):
        r = n % 2
        n = n//2
        list.append(r)
    
count=0

result = 0
    
for i in range(0,len(list)):
    if list[i] == 0:
        count = 0
    else:
        count +=1
        result = max(result,count)
    
print(result)
