n = input("Enter number(limit 99 crores):")    
l = len(n)

while l > 9:
    print("Enter again...")
    n = input("Enter number(limit 99 crores):")
    l = len(n)

while(l>0):
    if l == 9 or l == 8:
        if l == 9:
            print(n[0:-7],"crores", end=" ")
            n = n[2:l]
            l=l-2
        else:
            print(n[0:-7],"crore", end=" ")
            n = n[1:l]
            l=l-1
    if l == 7 or l == 6:
        if l == 7:
            print(n[0:-5],"lacs", end=" ")
            n = n[2:l]
            l=l-2
        else:
            print(n[0:-5],"lakh", end=" ")
            n = n[1:l]
            l=l-1
    if l == 5 or l == 4:
        if l == 5:
            print(n[0:-3],"thousands", end=" ")
            n = n[2:l]
            l=l-2
        else:
            print(n[0:-3],"thousand", end=" ")
            n = n[1:l]
            l=l-1
    if l == 3:
        print(n[0],"hundreds", end=" ")
        n = n[1:l]
        l=l-1
    if l == 2:
        print(n[0],"tens", end=" and ")
        n = n[1:l]
        l=l-1
    if l == 1:
        print(n[0],"", end="")
        l=l-1