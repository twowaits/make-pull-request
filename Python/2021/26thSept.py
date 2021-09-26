def printBinaryNo(n):
    if n>1:
        printBinaryNo(n//2)
    print(n%2, end="")
  

if __name__ == "__main__":
    print("Enter Value:3")
    n = int(input())
    for i in range(1, n+1):
        printBinaryNo(i)
        print(end=" ")
