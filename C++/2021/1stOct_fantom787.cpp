

#include <bits/stdc++.h>

using namespace std;

int is_prime(int n)
{
    if (n <= 1)
        return 0;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main()
{
    int n;
    cin >> n;
    int a = 1;
    int b = 1;
    int c;
    for (int i = 0; i < n; i++)
    {
        if (a % 5 == 0)
            cout << 0 << " ";
        else if (is_prime(a))
            cout << 0 << " ";
        else
            cout << a << " ";
        a = b;
        b = c;
    }

    return 0;
}
