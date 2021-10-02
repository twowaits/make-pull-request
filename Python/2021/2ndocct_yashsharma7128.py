

r = int(input("enter number of rows u want"))
c = int(input("enter no. of rows u want"))
for i in range(r) :
    for j in range(c):

        c1 = (j % ((r - 1) * 2));
        if (c1 >= r):
            c1 = c1 - r
            c1 = ((r - 1) - (c1 + 1))


        if (c1 == i):
            print(" "+(j+1))
        else:
             print(" ")

    print("\n")



