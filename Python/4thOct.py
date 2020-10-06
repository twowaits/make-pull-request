row, n = map(int, input().split())
for i in range(row):
	print(' '*i, end='')
	k = i+1
	turn = 1
	flag = True #To check if same number is not being printed twice 
	while k <= n:
		if flag:
			print(k, end='')
		if turn%2:
			k += ((row-i)*2)-2
			flag = bool(((row-i)*2)-2)
			print(' '*(((row-i)*2)-2), end='')
		else:
			k += i*2
			flag = bool(i*2)
			print(' '*(((i)*2)-1), end='')
		turn += 1
	print()

