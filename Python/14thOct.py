arr=[9, 7, 0, 2, 12, 1, 17]
arr=sorted(arr)
ans=-1
for i in range(1,len(arr)):
    diff=arr[i]-arr[i-1]
    if ans<diff:
        ans=diff
print(ans)
