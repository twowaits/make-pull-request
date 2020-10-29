def print_bin(n):
    s=""
    while n>0:
        if n%2:
            s=s+"1"
        else :
            s=s+"0"
        n=n//2
    s=s[::-1]
    for i in s:
        print(i,end="")
n=int(input())
for i in range(1,n+1):
    print_bin(i)
    if (i!=n) :
        print(", ",end="")