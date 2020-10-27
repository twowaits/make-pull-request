#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n; // user inputs the size of array
    cout << "\nEnter the elements of array" << endl;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i]; // inputing the elements of the array
    }
    int low = 0, high = n - 1, middle = 0;
    while (middle <= high) // algorithm
    {
        if (array[middle] == 0)
        {
            swap(array[low], array[middle]);
            low++;
            middle++;
        }
        else if (array[middle] == 1)
        {
            middle++;
        }
        else
        {
            swap(array[middle], array[high]);
            high--;
        }
    }
    cout << "\nThe sorted array" << endl;
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << ", "; //printing the sorted array
    }
    cout << "}";
}

/* SAMPLE OUTPUT
Enter the size of array
6

Enter the elements of array
0 1 1 2 0 0

The sorted array
{0, 0, 0, 1, 1, 2 }*/