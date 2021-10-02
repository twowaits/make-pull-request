#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long x)
{
    long long i;
    if (x == 1)
        return 0;
    else
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
                break;
        }
        if (i == x)
            return 1;
        else
            return 0;
    }
}

void fib(long long n)
{
    long long a = 0, b = 1, c = 0;
    while (n)
    {
        c = a + b;
        if ((c % 5 == 0) || (isPrime(c)))
            cout << "0";
        else
            cout << c;
        b = a;
        a = c;
        n--;
        cout << " ";
    }
}

int main()
{
    long long n;
    cin >> n;
    fib(n);
    return 0;
}