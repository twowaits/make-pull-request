#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int main()
{
    cout << "Enter the value of n: ";
    int n;
    cin >> n;
    cout << "Entered value of n is " << n << "\n";

    int a = 1, b = 1, c;
    for (int i = 0; i < n; i++)
    {
        if (a % 5 == 0 || isPrime(a))
        {
            cout << 0 << " ";
        }
        else
        {
            cout << a << " ";
        }

        c = a + b;
        a = b;
        b = c;
    }
}