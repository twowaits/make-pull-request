
#include <iostream>
using namespace std;

void bin_num(int n)
{
    int bin_num[1000];
    int i = 0;
    while (n > 0) {
        bin_num[i] = n % 2;
        n / = 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << bin_num[j];
    cout << " ";
    }

void bin_num_generation(int n)
{
    for(int i = 0; i<= n; i++)
    {
        bin_num(i);
    }
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "\nBinary numbers from 1 to "<< n << " : " ;
    bin_num_generation(n);
}
