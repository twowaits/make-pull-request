# Function to find permutations of a given string 
from itertools import permutations 
  
def allPermutations(str): 
       
     # Get all permutations of string 'ABC' 
     permList = permutations(str) 
  
     # print all permutations 
     for perm in list(permList): 
         print (''.join(perm)) 
        
# Driver program 
if __name__ == "__main__": 
	str = input("Enter string : ") 
	print(str)
    allPermutations(str) 