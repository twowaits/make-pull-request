def nTw(n):
    s = str(n)
    if len(s) == 1:
        print(n)
    elif len(s) == 2:
        print(s[-2], "Tens", s[-1])
    elif len(s) == 3:
        print(s[-3], "Hundreds", s[-2], "Tens and", s[-1])
    elif len(s) == 4:
        print(s[-4], "Thousands", s[-3], "Hundreds", s[-2], "Tens and", s[-1])
    elif len(s) == 5:
        print(s[-5:-3], "Thousands", s[-3], "Hundreds", s[-2], "Tens and", s[-1])
    elif len(s) == 6:
        print(s[-6], "Lacs", s[-5:-3], "Thousands", s[-3], "Hundreds", s[-2], "Tens and", s[-1])
    elif len(s) == 7:
        print(s[-7:-5], "Lacs", s[-5:-3], "Thousands", s[-3], "Hundreds", s[-2], "Tens and", s[-1])
    else:
        print(s[:-7], "Crores", s[-7:-5], "Lacs", s[-5:-3], "Thousands", s[-3], "Hundreds", s[-2], "Tens and", s[-1])


try:
    num = int(input("Enter the digits: "))
    nTw(num)
except:
    print("Please enter valid number")
