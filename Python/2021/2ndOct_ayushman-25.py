# Function to check if n is prime or not
def isPrime(n):
    if (n <= 1): return 0
    if (n <= 3): return 1
    if (n % 2 == 0 or n % 3 == 0): return 0
    for i in range(5, int(n ** (1 / 2)) + 1, 6):
        if (n % i == 0 or (n % (i + 2)) == 0):
            return 0
    return 1


def main():
    n = int(input())  # Taking input for the n
    fibo = [1, 1]  # Initialising first two terms
    for _ in range(n - 2):
        fibo.append(fibo[-1] + fibo[-2])  # fibo[i] = fibo[i - 1] + fibo[i - 2]
    # Checking the condition for being prime or multiple of 5 ->
    for i in range(n):
        if (isPrime(fibo[i]) or (fibo[i] % 5 == 0)):
            fibo[i] = 0
    print(*fibo)  # Unpacking the list


if __name__ == "__main__":
    main()
