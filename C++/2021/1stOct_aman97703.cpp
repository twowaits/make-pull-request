#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int flag = 0;
    if (n == 1 || n == 0)
    {
        return false;
    }
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return true;
    else
        return false;
}

void printFib(int n)
{
    int n1 = 0, n2 = 1, n3;
    cout<<n2<<" ";
    for (int i = 2; i <= n; ++i)
    {
        n3 = n1 + n2;        
        n1 = n2;
        n2 = n3;
        if(isPrime(n3) || n3%5 == 0)
        cout<<0<<" ";
        else
        cout<<n3<<" ";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        printFib(n);
    }

    return 0;
}
