#include <bits/stdc++.h> 
using namespace std; 
  
void Sort(int arr[], int n) 
{ 
    int min = arr[0], max = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
        if (arr[i] < min) 
            min = arr[i]; 
        if (arr[i] > max) 
            max = arr[i]; 
    } 
    int range = max - min + 1; 
    vector<int> v[range];            //using vector so that we can store multiple values for a key as it uses bucket 

    for (int i = 0; i < n; i++) 
        v[arr[i]-min].push_back(arr[i]); 
        
    int index = 0;
    for (int i = 0; i < range; i++) 
    { 
       vector<int>::iterator k;                           //iterator used to iterate over vector and store in array
       for (k = v[i].begin(); k != v[i].end(); ++k) 
            arr[index++]  = *k; 
    } 
} 
int main() 
{ 
cout<<"Rajarshi Tiwari 2nd Btech HBTU-K";
int n;
cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
  
    Sort(arr, n); 
  
    printf("Sorted order is : "); 
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
        cout<<endl;
   int max=arr[1]-arr[0];
   int d;
   for(int i=1;i<n;i++)
   {
   d=arr[i+1]-arr[i];
   if(d>max)
   max=d;
   }  
   cout<<max<<endl;
    return 0; 
} 
