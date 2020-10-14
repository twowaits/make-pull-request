

def maxSortedAdjacentDiff(arr, n): 
	maxVal, minVal = arr[0], arr[0] 
	for i in range(1, n): 
		maxVal = max(maxVal, arr[i]) 
		minVal = min(minVal, arr[i]) 
	maxBucket = [INT_MIN] * (n - 1) 
	minBucket = [INT_MAX] * (n - 1) 
	delta = (maxVal - minVal) // (n - 1) 

	for i in range(0, n): 
		if arr[i] == maxVal or arr[i] == minVal: 
			continue

		index = (arr[i] - minVal) // delta 

		if maxBucket[index] == INT_MIN: 
			maxBucket[index] = arr[i] 
		else: 
			maxBucket[index] = max(maxBucket[index], 
											arr[i]) 
		if minBucket[index] == INT_MAX: 
			minBucket[index] = arr[i] 
		else: 
			minBucket[index] = min(minBucket[index], 
											arr[i]) 
	prev_val, max_gap = minVal, 0
	
	for i in range(0, n - 1): 
		if minBucket[i] == INT_MAX: 
			continue
			
		max_gap = max(max_gap, 
					minBucket[i] - prev_val) 
		prev_val = maxBucket[i] 
	
	max_gap = max(max_gap, maxVal - prev_val) 

	return max_gap 
 
if __name__ == "__main__": 

	arr = raw_input().split(' ')
	n = len(arr) 
	INT_MIN, INT_MAX = float('-inf'), float('inf') 
	
	print(maxSortedAdjacentDiff(arr, n)) 
