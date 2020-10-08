n=input()
l=list(n)
i=0
while(i<len(l)):
    if(i==len(l)-1):
        print("and",end=' ')
    if len(l[i+1:])==8:
        print("{} crore".format(l[i]+l[i+1]),end='')
        i=i+2
    elif len(l[i+1:])==7:
        print("{} crores".format(l[i]),end=' ')
        i=i+1
    elif len(l[i+1:])==6:
        print("{} lacs".format(l[i]+l[i+1]),end=' ')
        i=i+2
    elif len(l[i+1:])==5:
        print("{} lac".format(l[i]),end=' ')
        i=i+1
    elif len(l[i+1:])==4:
        print("{} thousands".format(l[i]+l[i+1]),end=' ')
        i=i+2
    elif len(l[i+1:])==3:
        print("{} thousands".format(l[i]),end=' ')
        i=i+1
    elif len(l[i+1:])==2:
        print("{} hundreds ".format(l[i]),end=' ')
        i=i+1
    elif len(l[i+1:])==1:
        print("{} tens".format(l[i]),end=' ')
        i=i+1
    elif len(l[i+1:])==0:
        print("{}".format(l[i]),end=' ')
        i=i+1
        
