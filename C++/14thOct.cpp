// CPP program to find maximum adjacent difference 
// between two adjacent after sorting. 
#include<bits/stdc++.h> 
using namespace std; 
  
int maxSortedAdjacentDiff(int* arr, int n) 
{ 
    // Find maximum and minimum in arr[] 
    int maxVal = arr[0], minVal = arr[0]; 
    for (int i = 1; i < n; i++) { 
        maxVal = max(maxVal, arr[i]); 
        minVal = min(minVal, arr[i]); 
    } 
  
    // Arrays to store maximum and minimum values 
    // in n-1 buckets of differences. 
    int maxBucket[n - 1]; 
    int minBucket[n - 1]; 
    fill_n(maxBucket, n - 1, INT_MIN); 
    fill_n(minBucket, n - 1, INT_MAX); 
  
    // Expected gap for every bucket. 
    float delta = (float)(maxVal - minVal) / (float)(n - 1); 
  
    // Traversing through array elements and 
    // filling in appropriate bucket if bucket 
    // is empty. Else updating bucket values.  
    for (int i = 0; i < n; i++) { 
        if (arr[i] == maxVal || arr[i] == minVal) 
            continue; 
  
        // Finding index of bucket. 
        int index = (float)(floor(arr[i] - minVal) / delta); 
  
        // Filling/Updating maximum value of bucket 
        if (maxBucket[index] == INT_MIN) 
            maxBucket[index] = arr[i]; 
        else
            maxBucket[index] = max(maxBucket[index], arr[i]); 
  
        // Filling/Updating minimum value of bucket 
        if (minBucket[index] == INT_MAX) 
            minBucket[index] = arr[i]; 
        else
            minBucket[index] = min(minBucket[index], arr[i]); 
    } 
  
    // Finding maximum difference between maximum value 
    // of previous bucket minus minimum of current bucket. 
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
    int arr[] = { 1,7,0,9,12}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << maxSortedAdjacentDiff(arr, n) << endl; 
    return 0; 
} 