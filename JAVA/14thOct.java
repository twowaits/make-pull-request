class max_diff{ 

	static int maxSortedAdjacentDiff(int[] arr, int n) { 
		int maxVal = arr[0]; 
		int minVal = arr[0]; 
		for (int i = 1; i < n; i++) { 
			maxVal = Math.max(maxVal, arr[i]); 
			minVal = Math.min(minVal, arr[i]); 
		}  
		int maxBucket[] = new int[n - 1]; 
		int minBucket[] = new int[n - 1]; 
		Arrays.fill(maxBucket, 0, n - 1, Integer.MIN_VALUE); 
		Arrays.fill(minBucket, 0, n - 1, Integer.MAX_VALUE); 

		float delta = (float) (maxVal - minVal) / (float) (n - 1);  
		for (int i = 0; i < n; i++) { 
			if (arr[i] == maxVal || arr[i] == minVal) { 
				continue; 
			} 
			int index = (int) (Math.round((arr[i] - minVal) / delta)); 
			if (maxBucket[index] == Integer.MIN_VALUE) { 
				maxBucket[index] = arr[i]; 
			} else { 
				maxBucket[index] = Math.max(maxBucket[index], arr[i]); 
			} 
			if (minBucket[index] == Integer.MAX_VALUE) { 
				minBucket[index] = arr[i]; 
			} else { 
				minBucket[index] = Math.min(minBucket[index], arr[i]); 
			} 
		} 
		int prev_val = minVal; 
		int max_gap = 0; 
		for (int i = 0; i < n - 1; i++) { 
			if (minBucket[i] == Integer.MAX_VALUE) { 
				continue; 
			} 
			max_gap = Math.max(max_gap, minBucket[i] - prev_val); 
			prev_val = maxBucket[i]; 
		} 
		max_gap = Math.max(max_gap, maxVal - prev_val); 

		return max_gap; 
	} 
