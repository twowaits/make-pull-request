'''Generate Binary Numbers'''

def gen_binary(n):
    if n > 1:
        gen_binary(n // 2)
    print(n % 2, end="")
if __name__ == "__main__":
    n = int(input("enter a number: "))
    for i in range(1, n + 1):
        gen_binary(i)
        print(end = " ")
