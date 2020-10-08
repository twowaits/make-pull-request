N=int(input())
for i in range(1,N+1):
    for j in range(1,2*N):
        if i==N or i+j==N+1 or j-i==N-1:
          print("*",end="")
        else:
          print(end=" ")
    print()