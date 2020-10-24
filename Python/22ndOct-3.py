from itertools import permutations 
s = str(input())
p = permutations(s) 
for i in list(p):
        print(''.join(i))
