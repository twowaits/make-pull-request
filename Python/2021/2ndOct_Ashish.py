centre_element, end_element = list(map(int, input().split()))
for iterator in range(1, centre_element + 1):
    print("  " * (iterator - 1), end="")
    it = iterator
    while it <= end_element:
        print(it, end="")
        temp = it % (centre_element - 1)
        if (temp == 0): temp = (centre_element - 1)
        it += (centre_element - temp) * 2
        print("  " * ((centre_element - temp) * 2 - 1), end="")
    print()
