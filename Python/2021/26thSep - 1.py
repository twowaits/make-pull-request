n = int(input("n = "))
for i in range(1, n+1):
    print(bin(i).split("b")[1], end=" ")
