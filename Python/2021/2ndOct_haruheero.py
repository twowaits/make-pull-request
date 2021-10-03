r,c=map(int,input().split());a=1
for x in range(r):
    for y in range(c):
        if (x+y)%(2*(r-1))==0 :
            if a%c!=0:print(a%c,'\t',end='\t')
            else:print(c,'\t',end='\t')
        elif x==(y%(2*(r-1))):
            if a%c!=0:print(a%c,'\t',end='\t')
            else:print(c,'\t',end='\t')
        else:print(end='\t')
        a+=1
    print('\n')
