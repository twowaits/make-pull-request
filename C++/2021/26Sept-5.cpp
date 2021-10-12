//Code by Bansi-Marakana
#include <iostream>
using namespace std;

void binary(int n)
{
    int b[1000], i = 0, j;
    while (n > 0)
    {
        b[i] = n % 2;
        n / = 2;
        i++;
    }
    for (j = i - 1; j >= 0; j--)
        cout << b[j];
    cout << " ";
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "\nBinary numbers from 1 to "<< n << " : " ;
    for(int i = 0; i < n; i++)
        binary(i);
}
