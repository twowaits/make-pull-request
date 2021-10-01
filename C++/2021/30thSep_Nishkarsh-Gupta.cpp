Here is the required functionality for sorting an array.

// here we are using bubble sort to sort the array in ascending order.  
#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void mySort(int *arr, int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {    
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }        
}

int main() {
    int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++) {
	    cin >> arr[i];
	}
	mySort(arr, n);
	for(int i=0; i<n; i++) {
	    cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
