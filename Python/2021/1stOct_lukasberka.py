import typing


def generate_fib(length: int) -> typing.List:
    fib_seq = [1, 1]
    if length <= 1:
        return []
    if length == 2:
        return fib_seq

    for i in range(2, length):
        fib_seq.append(fib_seq[i - 1] + fib_seq[i - 2])

    return fib_seq


def is_prime(num: int) -> bool:
    if num == 1:
        return False
    for i in range(2, num // 2 + 1):
        if num % i == 0:
            return False
    return True


def print_pseudo_fib(fib_sequence: typing.List):
    for i in fib_sequence:
        if i % 5 == 0 or is_prime(i):
            print(0, end=" ")
        else:
            print(i, end=" ")


def main(fib_length: int):
    fib_sequence = generate_fib(fib_length)
    print_pseudo_fib(fib_sequence)


if __name__ == "__main__":
    main(int(input()))
