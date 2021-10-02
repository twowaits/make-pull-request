#include <iostream>
using namespace std;

bool isPrime(int n)
{

    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
void fib(int x)
{
    int a = 1, b = 1, temp = 0;
    for (int i = 1; i <= x; ++i)
    {
        if (i == 1)
        {
            cout << a << " ";
            continue;
        }
        if (i == 2)
        {
            cout << b << " ";
            continue;
        }

        temp = a + b;
        a = b;
        b = temp;
        if (temp % 5 == 0)
        {
            temp = 0;
        }
        if (isPrime(temp))
            temp = 0;
        cout << temp << " ";
    }
}

int main()
{
    int a;
    cin >> a;
    fib(a);
    return 0;
}
