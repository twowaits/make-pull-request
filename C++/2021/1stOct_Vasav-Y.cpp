#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n);
void fib(int n);

int main()
{
    int n;
    cin >> n;
    fib(n);
    return 0;
}

bool isPrime(int n)
{
    int flag = 0;
    if (n == 1)
    {
        return false;
    }
    for (int j = 2; j <= sqrt(n); j++)
    {
        if (n % j == 0)
        {
            return false; //after this we'll be out of the function, we don't need to use any break function
        }
    }
    return true;
}

void fib(int n)
{
    int n1 = 1, n2 = 1, n3;
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(n1) == 1 || n1 % 5 == 0)
        {
            cout << " 0 ";
        }
        else
        {
            cout << n1 << " ";
        }

        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
    }
    return;
}
