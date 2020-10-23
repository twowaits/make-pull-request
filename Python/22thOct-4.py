from itertools import permutations 
  
def allPermutations(str): 
       
     # Get all permutations of string 'ABC' 
     permList = permutations(str) 
  
     # print all permutations 
     for perm in list(permList): 
         print (''.join(perm))


allPermutations("ABC")