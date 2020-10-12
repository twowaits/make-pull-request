arr=list(map(int,input().split(" ")))
li=[0]*3
for i in arr:
    li[i]+=1
c=0
for i in li:
    for x in range(i):
        print(c,end=" ")
    c+=1
