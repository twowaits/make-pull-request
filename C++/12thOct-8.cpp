#include <iostream>
using namespace std;

void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void sortArray(int arr[], int high) {
  int mid = 0;
  int low = 0;
  int base = 1;
  while (mid <= high) {
    if (arr[mid] < base) {
      swap(arr, mid, low);
      ++mid, ++low;
    } else if (arr[mid] > base) {
      swap(arr, mid, high);
      --high;
    } else {
      ++mid;
    }
  }
}

int main() {
  int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1, 2, 1, 2};
  int size = sizeof(arr) / sizeof(int);
  sortArray(arr, size - 1);
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
