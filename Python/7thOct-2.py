def tens(a):
    return str(int(a)) + (' tens and ' if int(a) > 1 else ' ten and ')
def hundreds(a):
    return str(int(a)) + (' hundreds ' if int(a) > 1 else ' hundred ')
def thousands(a):
    return str(int(a)) + (' thousands ' if int(a) > 1 else ' thousand ')
def lacs(a):
    return str(int(a)) + (' lacs ' if int(a) > 1 else ' lac ')
def crores(a):
    return str(int(a)) + (' crores ' if int(a) > 1 else ' crore ')

num = input()
if len(num) == 1:
    word = num
elif len(num) == 2:
    word = tens(num[0]) + num[1]
elif len(num) == 3:
    word = hundreds(num[0]) + tens(num[1]) + num[2]
elif len(num) == 4:
    word = thousands(num[0]) + hundreds(num[1]) + tens(num[2]) + num[3]
elif len(num) == 5:
    word = thousands(num[:2]) + hundreds(num[2]) + tens(num[3]) + num[4]
elif len(num) == 6:
    word = lacs(num[0]) + thousands(num[1:3]) + hundreds(num[3]) + tens(num[4]) + num[5]
elif len(num) == 7:
    word = lacs(num[0:2]) + thousands(num[2:4]) + hundreds(num[4]) + tens(num[5]) + num[6]
else:
    word = crores(num[:-7]) + lacs(num[-7:-5]) + thousands(num[-5:-3]) + hundreds(num[-3]) + tens(num[-2]) + num[-1]
print(word)