inp=int(input());
if(inp>=1):
    print(1,end=" ")
if(inp>=2):
    print(1,end=" ")
if(inp>=3):
    print(0,end=" ")
a,b=1,2
for i in range(inp-3):
    c=a+b
    t=False
    for i in range(2,int(c**0.5)+1):
        if(c%i==0):
            t=True
    if(c%5==0): t=False
    if(t): print(c,end=" ") 
    else: print(0,end=" ")
    a,b=b,c
