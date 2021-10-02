# I have done with the zigzag pattern solving issue

n,m=map(int,input().split())
ll=[[' ']*m for _ in range(n)]
c=1
i,j=0,0
down=1
while c<=16:
    ll[i][j]=c
    if down:
        if i+1<n:
            i+=1
        else:
            i-=1
            down=0
    else:
        if i-1>=0:
            i-=1
        else:
            i+=1
            down=1
    j+=1
    c+=1
for i in ll:
    print(*i)
