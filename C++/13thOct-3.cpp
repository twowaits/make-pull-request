#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n; /*n Size of the array*/
    int A[n][n];
    int len = n, k = 1, p = 0, i; /*k is to assign the values to the array from 1...n*n */
                                  /*len is used to update(decrease) array size so that values cans be assign to them */
    while (k <= n * n)
    {
        for (i = p; i < len; i++) /*Loop to access the first row of the array*/
        {
            A[p][i] = k++;
        }
        for (i = p + 1; i < len; i++) /*Loop tp access the last column of the array*/
        {
            A[i][len - 1] = k++;
        }
        for (i = len - 2; i >= p; i--) /*Loop to access the last row of the array*/
        {
            A[len - 1][i] = k++;
        }
        for (i = len - 2; i > p; i--) /*Loop to access the first column of the array*/
        {
            A[i][p] = k++;
        }
        p++, len = len - 1;
    }
    if (!n % 2) /*This block will run only if n is even*/
    {
        A[(n + 1) / 2][(n + 1) / 2] = n * n; /*It will assign the last value to the centremost element*/
    }
    cout << "[";
    for (i = 0; i < n - 1; i++) /*This loop will print the array in matrix format*/
    {
        cout << "[";
        for (int j = 0; j < n - 1; j++)
        {
            cout << A[i][j] << ",";
        }
        cout << A[i][n - 1] << "], " << endl;
    }
    cout << "The spiral matrix is :" << endl
         << "[";
    for (int j = 0; j < n - 1; j++)
    {
        cout << A[n - 1][j] << ",";
    }
    cout << A[n - 1][n - 1] << "]]" << endl;
    return 0;
}
/* SAMPLE OUTPUT
Enter the size of the array : 3
The spiral matrix is :
[[1,2,3], 
[8,9,4], 
[7,6,5]]*/
