def t(z):
    return str(int(z)) + (' tens and ' if int(z) > 1 else ' ten and ')
def hun(z):
    return str(int(z)) + (' hundreds ' if int(z) > 1 else ' hundred ')
def thous(z):
    return str(int(z)) + (' thousands ' if int(z) > 1 else ' thousand ')
def lac(z):
    return str(int(z)) + (' lacs ' if int(z) > 1 else ' lac ')
def crore(z):
    return str(int(z)) + (' crores ' if int(z) > 1 else ' crore ')

n = input()
if len(n) == 1:
    alpha = n
elif len(n) == 2:
    alpha = t(n[0]) + n[1]
elif len(n) == 3:
    alpha = hun(n[0]) + t(n[1]) + n[2]
elif len(n) == 4:
    alpha = thous(n[0]) + hun(n[1]) + t(n[2]) + n[3]
elif len(n) == 5:
    alpha = thous(n[:2]) + hun(n[2]) + t(n[3]) + n[4]
elif len(n) == 6:
    alpha = lac(n[0]) + thous(n[1:3]) + hun(n[3]) + t(n[4]) + n[5]
elif len(n) == 7:
    alpha = lac(n[0:2]) + thous(n[2:4]) + hun(n[4]) + t(n[5]) + n[6]
else:
    alpha = crore(n[:-7]) + lac(n[-7:-5]) + thous(n[-5:-3]) + hun(n[-3]) + t(n[-2]) + n[-1]
print(alpha) 
