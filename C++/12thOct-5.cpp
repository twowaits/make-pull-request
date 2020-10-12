#include <bits/stdc++.h> 
using namespace std; 
  
void sorting(int array[], int arr_size) 
{ 
    int lo = 0; 
    int hi = arr_size - 1; 
    int mid = 0; 
  
    while (mid <= hi) { 
        switch (array[mid]) { 
 
        case 0: 
            swap(array[lo++], array[mid++]); 
            break; 
  
        case 1: 
            mid++; 
            break; 
  
        case 2: 
            swap(array[mid], array[hi--]); 
            break; 
        } 
    } 
} 
  
void printArr(int arr[], int arr_size) 
{ 
    for (int i = 0; i < arr_size; i++) 
        cout << arr[i] << " "; 
} 
  
int main() 
{ 
    int arr[] = { 0, 1, 0, 1, 2, 1, 2 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    sorting(arr, n); 
  
    printArr(arr, n); 
  
    return 0; 
} 
