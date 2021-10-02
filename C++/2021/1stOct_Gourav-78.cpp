#include <iostream>

using namespace std;

int prime(int x)
{
    int c = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
            c++;
    }
    if (c == 2)
        return 1;
    else
        return 0;
}

int multiple(int x)
{
    if (x % 5 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    if (n < 0)
        exit(0);
    cout << "Enter no. of terms to print : ";
    cin >> n;

    int a = 1, b = 0, c;
    int c1, c2;
    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        c1 = prime(c);
        c2 = multiple(c);
        if (c1 == 1 || c2 == 1)
        {
            cout << "0 ";
        }
        else
        {
            cout << c << " ";
        }
    }
    return 0;
}