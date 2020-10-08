def main():
	row = int(input())
	for i in range(1, row):
		# white space in the begining
		print(' '*(row-i), end='')

		for k in range(2*row):
			if k == 0 or k == 2*i -2:
				print('*', end='')
			else:
				print(' ', end='')
		print()
		
	# base of the triangle
	for i in range(row):
		print('* ', end='')

if __name__ == '__main__':
	main()
