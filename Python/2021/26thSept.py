def printBinary(n):
    if n>1:
        printBinary(n//2)
    print(n%2, end="")
  

if __name__ == "__main__":
    print("Enter Value")
    n = int(input())
    for i in range(1, n+1):
        printBinary(i)
        print(end=" ")
