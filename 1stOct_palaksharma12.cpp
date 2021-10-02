#include <bits/stdc++.h>
using namespace std;

bool is_Prime(int n)
{
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{

    int n;
    cin >> n;

    int fib[n + 1];

    fib[1] = 1;
    fib[2] = 1;

    for (int i = 3; i < n + 1; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 1; i < n + 1; i++)
    {

        if (fib[i] % 5 == 0 || is_Prime(fib[i]) == true)
            fib[i] = 0;

        cout << fib[i] << " ";
    }

    return 0;
}