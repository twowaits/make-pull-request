#include <bits/stdc++.h>
using namespace std;

bool primeornot(int n)
{
    bool flag = false;

    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a = 1, b = 1, i,temp;
    cout << "Enter a Number" << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        if (a % 5 == 0 || primeornot(a))
        {
            cout << "0 ";
        }
        else
        {
            cout << a << " ";
        }

        temp = a+b;
        a=b;
        b=temp;
    }
    return 0;
}
