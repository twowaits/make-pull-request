#Fibonacci Series with a Twist

n = int(input())
a = 0
b = 1
print("1", end = " ")

for i in range(0, n - 1):
    d = 0
    c = a + b
    if(c % 5  ==  0):
        d = 0
    else:
        k = 0
        for i in range(1, c + 1):
            if(c % i  ==  0):
                k += 1
        if(k == 2):
            d = 0
        else:
            d = c
    a = b
    b = c
        
    print(d, end = " ")
