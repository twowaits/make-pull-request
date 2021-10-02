#include <iostream>
using namespace std;

bool isPrime(int c)
{
    for (int i = 2; i * i <= c; i++)
    {
        if (c % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int a = 1, b = 1;
    if (n >= 1)
    {
        cout << a << " ";
    }
    if (n >= 2)
    {
        cout << b << " ";
    }
    int c;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        if (c % 5 == 0 || isPrime(c))
        {
            cout << "0 ";
        }
        else
        {
            cout << c << " ";
        }
        a = b;
        b = c;
    }
}
