#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int Arr[n][n];
    int length = n, k = 1, p = 0, i; 
                                  
    while (k <= n * n)
    {
        for (i = p; i < length; i++) 
        {
            Arr[p][i] = k++;
        }
        for (i = p + 1; i < length; i++) 
        {
            Arr[i][length - 1] = k++;
        }
        for (i = length - 2; i >= p; i--) 
        {
            Arr[length - 1][i] = k++;
        }
        for (i = length - 2; i > p; i--) 
        {
            Arr[i][p] = k++;
        }
        p++, length = length - 1;
    }
    if (!n % 2) 
    {
        Arr[(n + 1) / 2][(n + 1) / 2] = n * n; /*It will assign the last value to the centremost element*/
    }
    cout << "The spiral matrix is :" << endl;
    cout<<"[";
    for (i = 0; i < n ; i++) 
    {
        for (int j = 0; j < n ; j++)
        {
            cout << Arr[i][j] << ",";
        }
        if(i<n-1)
        cout<< endl;
        if(i==n-1)
        cout<<"]";
    }
    return 0;
}