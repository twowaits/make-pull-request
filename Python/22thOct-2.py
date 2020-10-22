a = list(map(int, input().split()))
count_0 = 0
count_1 = 0
n = 0
for i in range(len(a)):
    if a[i] == 0:
        n = a.pop(i)
        a.insert(0, n)
        count_0 = count_0 + 1
    elif a[i] == 1:
        n = a.pop(i)
        a.insert(count_0, n)
        count_1 = count_1 + 1
    elif a[i] == 2:
        n = a.pop(i)
        a.insert(count_1 + count_0, n)

for element in a:
    print(element, end=' ')