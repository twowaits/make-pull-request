# String permutations

def toString(List):
    return(''.join(List))

# Permutation function
def permute(a, b, c):
    if b == c:
        print(toString(a)) # print results
    else:
        for i in range(b, c + 1):
            a[b], a[i] = a[i], a[b]
            permute(a, b + 1, c)
            a[b], a[i] = a[i], a[b]

s = input("String: ") # Takes user input
l = len(s)
a = list(s)
permute(a, 0, l-1) # runs function

input("Press enter to continue...")