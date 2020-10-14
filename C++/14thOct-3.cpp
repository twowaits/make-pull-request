#include <iostream>
using namespace std;

void sort(int array[], int n) //function to sort the array in ascending order in linear time
{
    int arr[20], b[20]; //size of array must be atleast 1 greater than the maximum value of the array
    int k = array[0], i;
    for (i = 1; i < n; i++) //finds the maximum element of the array
    {
        if (array[i] > k)
            k = array[i];
    }
    for (i = 0; i <= k; ++i) //initialize all elements to 0
    {
        b[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        b[array[i]]++;
    }

    for (i = 1; i <= k; i++) //finds cumulative sum
    {
        b[i] = b[i] + b[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        arr[b[array[i]] - 1] = array[i];
        b[array[i]]--;
    }
    for (int i = 0; i < n; i++) //stores the final array in a new array
    {
        array[i] = arr[i];
    }
}

// Function to print the sorted array and find the maximum difference
void check(int array[], int n)
{
    int max = 0;
    for (int i = 0; i < n - 1; ++i) //finds the maximum difference between adjacent elements
    {
        if ((array[i + 1] - array[i]) > max)
            max = array[i + 1] - array[i];
    }
    cout << max << endl;
}

// Driver code
int main()
{
    int array1[] = {1, 7, 0, 9, 12};
    int array2[] = {9, 7, 0, 2, 12, 1, 17};
    int size1 = 5;
    int size2 = 7;
    sort(array1, size1);
    check(array1, size1);
    sort(array2, size2);
    check(array2, size2);
    return 0;
}
/* SAMPLE OUTPUT
6
5*/
