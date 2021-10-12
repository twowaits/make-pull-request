#include <bits/stdc++.h>
using namespace std;

/*
	"Sorting an Array"
	Add following functionalities to it :

	Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array.
	The functions should put all 0s first, then all 1s and all 2s in last.
	You have to do it in only 1 pass, you cannot use additional space (like array) and you can't use sorting/sorting functions.
	Sample Input :
	{0, 1, 2, 0, 1, 2}
	{0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}

	Sample Output :
	{0, 0, 1, 1, 2, 2}
	{0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}

*/

int main() {

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Unsorted Array : ";
	for (auto x : arr) {
		cout << x << " ";
	}
	cout << endl;
	int low = 0; // this will store the right most position where 0
	int high = n - 1; // this will contain the left most position of the 2
	int mid = 0; // this will contain the right most position of the 1
	while (mid <= high) {
		if (arr[mid] == 0) {
			swap(arr[low], arr[mid]);
			low++;
			mid++;
		}
		else if (arr[mid] == 1) {
			mid++;
		}
		else {
			swap(arr[high], arr[mid]);
			high--;
		}
	}
	cout << "Sorted Array : ";
	for (auto x : arr) {
		cout << x << " ";
	}
	return 0;
}