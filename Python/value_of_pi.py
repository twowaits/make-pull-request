fractions = input("Enter number of fractions of pi")
# Initialize denominator
k = 1
 
# Initialize sum
s = 0
 
for i in range(fractions):
 
    # even index elements are positive
    if i % 2 == 0:
        s + = 4/k
    else:
 
        # odd index elements are negative
        s -= 4/k
 
    # denominator is odd
    k += 2
     
print(s)
