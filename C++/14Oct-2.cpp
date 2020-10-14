#include <iostream.h> 
using namespace std; 
int diff(int* arr, int n) 
{ 
    int max=arr[0], min=arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
       max= max(max, arr[i]); 
       min= min(min, arr[i]); 
    }
    int a[n - 1]; 
    int b[n - 1]; 
    fill_n(a, n - 1, INT_MIN); 
    fill_n(b, n - 1, INT_MAX); 
    float delta = (float)(max - min) / (float)(n - 1); 
    for (int i = 0; i < n; i++) { 

        if (arr[i] == max || arr[i] == min) 

            continue; 


        int index = (float)(floor(arr[i] - min) / delta); 

        if (a[index] == INT_MIN) 

            a[index] = arr[i]; 

        else 

            a[index] = max(a[index], arr[i]); 
        if (b[index] == INT_MAX) 

            b[index] = arr[i]; 

        else 

            b[index] = min(b[index], arr[i]); 

    } 
    int prev_val = min; 
    int max_gap = 0; 
    for (int i = 0; i < n - 1; i++)
   { 

       if (b[i] == INT_MAX)
       continue;
       max_gap = max(max_gap, b[i] - prev_val); 
       prev_val = a[i]; 

    } 
    max_gap = max(max_gap, max - prev_val); 
    return max_gap; 
} 
int main() 
{ 
    int arr[] = { 1, 7, 2, 9, 12 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << diff(arr, n) << endl; 
    return 0; 
} 
