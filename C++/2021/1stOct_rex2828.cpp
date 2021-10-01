#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
    int n1 = 0, n2 = 1, n, n3;
    cin >> n;
    cout << n2 << " ";
    for (int i = 1; i < n; i++)
    {
        n3 = n1 + n2;
        if (n3 % 5 == 0 || isPrime(n3))
            cout << 0 << " ";
        else
            cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
    cout << "\n";
    return 0;
}
