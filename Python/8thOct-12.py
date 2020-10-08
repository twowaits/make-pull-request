"""
Java Program To Print Hollow Pyramid
Author: Siddharth Shrivastava, GitHub: @Siddharth2430
"""
def hollowPyra(n):
        k = n
        for i in range(1,n):
                for j in range(1,n+1):
                        if j>k and j<n:
                                print(" ",end="")
                        if j==k or j==n:
                                print("* ",end="")
                        else:
                                print(" ",end="")
                k -= 1
                print("")
        for i in range(n):
                print("* ",end="")
hollowPyra(int(input("Enter Number Of Rows: ")))
