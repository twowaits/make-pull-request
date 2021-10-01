def chk_p5m(n):
    if n%5==0: return 0
    elif n==1: return n
    for i in range(2,n):
        if n%i==0:
            return n
    return 0
    
def fab(n):
    f=[0,1]
    return  [chk_p5m((f:=[f[-1],f[-1]+f[-2]])[0]) for i in range(n)]

#i know it's little confusing most won't understand... but tried to do something unique
    
print(*fab(int(input())))