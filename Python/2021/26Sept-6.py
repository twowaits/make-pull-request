def generate_bin(num):
    if num > 1:
        generate_bin(num // 2)
    print(num % 2, end="")
if __name__ == "__main__":
    num = int(input())
    for i in range(1, num + 1):
        generate_bin(i)
        print(end = " ")
