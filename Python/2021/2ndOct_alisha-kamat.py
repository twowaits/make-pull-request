# Author: Alisha Kamat

# Function to implement Zigzag pattern
def create_zigzag(r,c):
    strings = []
    for i in range(1,r+1):
        strings.append("")
        strings[i-1] = " "*((i-1)*2) + str(i) + " "*((r-i-1)*4+3)
    t = min(c,(2*r)-1)
    j = 0
    for i in reversed(range(r+1,t+1)):
        strings[j] += str(i)
        j += 1
    if (c-((2*r)-1)) > 0:
        t = (c-((2*r)-1))
        for i in range(1,t+1):
            strings[i] += " "*(4*i-2) + str(i+(2*r)-1)
    for i in range(1,r+1):
        print(strings[i-1])

# Main Function
def main():
    r = int(input("Enter the number of rows: "))
    c = int(input("Enter the number of columns: "))
    create_zigzag(r,c)
    
main()