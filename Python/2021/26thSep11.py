def binary_number(n):
    for j in range(n):
        a=bin(j).replace("0b","")
        print(a)
n=int(input())
binary_number(n)
