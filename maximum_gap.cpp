#include <bits/stdc++.h> 
using namespace std; 

int maxgap(int* arr, int n) 
{ 
	 
	int maxVal = arr[0], minVal = arr[0]; 
	for (int i = 1; i < n; i++) { 
		maxVal = max(maxVal, arr[i]); 
		minVal = min(minVal, arr[i]); 
	} 

	
	int maxBucket[n - 1]; 
	int minBucket[n - 1]; 
	fill_n(maxBucket, n - 1, INT_MIN); 
	fill_n(minBucket, n - 1, INT_MAX); 

	
	float delta = (float)(maxVal - minVal) / (float)(n - 1); 

	
	for (int i = 0; i < n; i++) { 
		if (arr[i] == maxVal || arr[i] == minVal) 
			continue; 

		 
		int index = (float)(floor(arr[i] - minVal) / delta); 

	
		if (maxBucket[index] == INT_MIN) 
			maxBucket[index] = arr[i]; 
		else
			maxBucket[index] = max(maxBucket[index], arr[i]); 

		 
		if (minBucket[index] == INT_MAX) 
			minBucket[index] = arr[i]; 
		else
			minBucket[index] = min(minBucket[index], arr[i]); 
	} 

	
	int prev_val = minVal; 
	int max_gap = 0; 
	for (int i = 0; i < n - 1; i++) { 
		if (minBucket[i] == INT_MAX) 
			continue; 
		max_gap = max(max_gap, minBucket[i] - prev_val); 
		prev_val = maxBucket[i]; 
	} 
	max_gap = max(max_gap, maxVal - prev_val); 

	return max_gap; 
} 

int main() 
{ 
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	cout << maxgap(arr, n) << endl; 
	return 0; 
} 
