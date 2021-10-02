#include <iostream>
using namespace std;

int isPrime(long int val)
{
    if (val <= 1)
    {
        return -1;
    }
    for (int i = 2; i < val; i++)
    {
        if (val % i == 0)
        {
            return -1;
        }
    }
    return 1;
}

int multiple(long int val)
{
    return (val % 5 == 0 ? 1 : -1);
}

int main()
{
    long int n, t1 = 1, t2 = 1, nxterm = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            cout << "1 ";
        }
        if (i == 1)
        {
            cout << "1 ";
        }
        else if (i > 2)
        {
            nxterm = t1 + t2;
            t1 = t2;
            t2 = nxterm;
            if (isPrime(nxterm) == 1 || multiple(nxterm) == 1)
            {
                cout << "0 ";
            }
            else
            {
                cout << nxterm << " ";
            }
        }
    }
    return 0;
}
