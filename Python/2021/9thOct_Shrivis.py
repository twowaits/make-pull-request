def GCD(a, b):
	return a if b==0 else GCD(b, a%b)		

def fact(n):
    return 1 if (n == 1 or n == 0) else n * fact(n - 1);

# input format: a b
a, b = map(int, input().split())
print(GCD(fact(a), fact(b)))
