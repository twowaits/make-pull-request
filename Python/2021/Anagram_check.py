def anagram(s1, s2):
    
    # Remove spaces and lowercase letters
    s1 = s1.replace(' ','').lower()
    s2 = s2.replace(' ','').lower()
    
    # Edge Case to check if same number of letters
    if len(s1) != len(s2):
        return False
    
    # Create counting dictionary (Note could use DefaultDict from Collections module)
    count = {}
        
    # Fill dictionary for first string (add counts)
    
    #print("Adding elems")
    for letter in s1:
        if letter in count:
            count[letter] += 1
        else:
            count[letter] = 1
        #print(count)
            
    # Fill dictionary for second string (subtract counts)
    
    #print("subtracting elems")
    for letter in s2:
        if letter in count:
            count[letter] -= 1
        else:
            count[letter] = 1
        #print(count)
    
    # Check that all counts are 0
    for k in count:
        if count[k] != 0:
            return False

    # Otherwise they're anagrams
    return True

anagram('clint eastwood','old west action')