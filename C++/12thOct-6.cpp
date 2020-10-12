#include <bits/stdc++.h> 
using namespace std; 

void sort(int a[], int size) 
{ 
	int first = 0; 
	int last = size - 1; 
	int mid = 0; 

	while (mid <= last) { 
		switch (a[mid]) { 
		case 0: 
			swap(a[first++], a[mid++]); 
			break; 

		case 1: 
			mid++; 
			break; 

		case 2: 
			swap(a[mid], a[last--]); 
			break; 
		} 
	} 
} 
void print(int arr[], int size) 
{ 
	
	for (int i = 0; i < size; i++) 
		cout << arr[i] << " "; 
} 

int main() 
{
 int n;
 cout<<"Enter the size of array: ";
 cin>>n;
	int arr[n] ;
  for(int i=0;i<n;i++){
    cin>>arr[i];}
	sort(arr, n); 
    print(arr, n); 

	return 0; 
} 
