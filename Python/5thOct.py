
def getIndex(move, row, col):
	"""
	Input: 
		move = The current direction of rotation
			r = right
			l = left
			u = up
			d = down
		row = current row of element
		col = current column of element
	Returns: 
		row & col = position of next element
	"""
	if move == 'r':
		col += 1
	if move == 'l':
		col -= 1
	if move == 'u':
		row -= 1
	if move == 'd':
		row += 1
	return row, col

def changeMove(move):
	"""
	Input: 
		move = The current direction of rotation
			r = right
			l = left
			u = up
			d = down
	Returns: 
		move = new direction of rotation
	"""
	if move == 'r':
		return 'd'
	if move == 'd':
		return 'l'
	if move == 'l':
		return 'u'
	if move == 'u':
		return 'r'

def display(arr):
	"""
	Input:
		arr = A 2D array containing all the elements of array
	Returns;
		None
	**prints all the elements of array with proper formatting**
	"""
	n = len(arr)
	for i in range(n):
		for j in range(n):
			if arr[i][j] == 0:
				print('   ', end=' ')
			else:
				print(f'{arr[i][j]:>3}', end=' ')
		print()


def main():
	N = int(input())
	n = int(N**0.5)
	if n != N**0.5:
		n += 1

	arr = [[0]*n for i in range(n)]
	row = col = 0
	boundary = sizeleft = n - 1
	flag = True
	move = 'r'

	for i in range(1, N+1):
		arr[row][col] = i
		row, col = getIndex(move, row, col)

		if i == boundary:
			boundary += sizeleft
			if flag:
				flag = False
			else:
				flag = True
				sizeleft -= 1
			move = changeMove(move)

	display(arr)

if __name__ == '__main__':
	main()
