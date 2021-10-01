#include <bits/stdc++.h>
using namespace std;

// function to check prime
bool isNumberPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

void fibonacci(int n)
{
    int a = 1, b = 1, c, i;
    if (n == 0)
    {
        return;
    }
    else if (n == 1)
    {
        cout << "1 ";
    }
    else if (n > 1)
    {
        cout << "1 1 ";
    }
    for (i = 3; i <= n; i++)
    {
        c = a + b;
        if (c % 5 != 0 && !isNumberPrime(c))
        {
            cout << c << " ";
        }
        else
        {
            cout << "0 ";
        }
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    fibonacci(n);
    return 0;
}