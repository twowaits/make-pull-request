#include <iostream>
using namespace std;

// prime number check function
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;

    int sum1 = 0, sum2 = 0;
    int sum = sum1 + sum2;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            sum1 = 1;
            cout << "1 ";
        }
        else
        {
            sum = sum1 + sum2;
            sum2 = sum1;
            sum1 = sum;
            if (i % 5 == 0 || isPrime(sum))
            {
                cout << "0 ";
            }
            else
            {
                cout << sum;
                cout << " ";
            }
        }
    }
    cout << "\n";
    return 0;
}
