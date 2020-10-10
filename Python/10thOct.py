def reverseStr(str): 
    n = len(str) 

    str1 = '' 
    i = n - 1
    while i >= 0: 

        str1 += str[i] 
        i -= 1
    print(str1)      
str = input()
reverseStr(str)
      
  
      
