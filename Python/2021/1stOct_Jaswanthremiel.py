#It Doesn't Comes Under Selection Sort
import time as t
print("           Brought To You by ")
t.sleep(0.5)
print("*"*40)
t.sleep(0.5)
print("      ____                _      _ ")
print("     |  _ \ ___ _ __ ___ (_) ___| |")
print("     | |_) / _ \ '_ ` _ \| |/ _ \ |")
print("     |  _ <  __/ | | | | | |  __/ |")
print("     |_| \_\___|_| |_| |_|_|\___|_|")                              
print("            Insta:@jrxag_official     ")
t.sleep(0.5)
print("*"*40)
t.sleep(0.5)
print("\n    --------SELECTION SORT--------")

#----------------------------------------------


#Main Definiton Of The Selection Sort

def sort(nums):
  for i in range(len(nums)-1):
    min=i
    for j in range(i,len(nums)):
      if nums[j]<nums[min]:
        min=j
    temp=nums[i] 
    nums[i]=nums[min]
    nums[min]=temp
  return nums    
  
  
  
  
#__main__
nums=[]
n=int(input("Enter the No.Of Elements"))
for i in range(0,n):
  ele=int(input())
  nums.append(ele)    
isort=sort(nums)
print("The Correct Order Is") 
t.sleep(0.5) 
print(isort)  
t.sleep(0.5)    





#appreciation
print("*"*40)
print("Thanks, Checkout My Profile For More")
t.sleep(2)
print("Leave A Star, That Motivates Me A Lot")
t.sleep(1)
print("       _______  __   __  _______ ")
print("      |  _    ||  | |  ||       |")
print("      | |_|   ||  |_|  ||    ___|")
print("      |       ||       ||   |___ ")
print("      |  _   | |_     _||    ___|")
print("      | |_|   |  |   |  |   |___ ")
print("      |_______|  |___|  |_______|")
