#include<iostream>
using namespace std;

int twist(int n)
{
    int yes = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            if (n % 5 == 0)
            {
                return 0;
            }
            else
                return n;
        }
        else
        {
            yes = 0;
        }
    }
    if (yes == 0 || n == 2 || 3)
    {
        return 0;
    }
}

int main()
{
    int n3 = 0, n1 = 0, n2 = 1, number_limit;
    cin>>number_limit;
    for (int i = 0; i < number_limit; i++)
    {
        if (i == 0)
        {
            cout<<i+1;
        }
        else
        {
            n3 = n2 + n1;
            n1 = n2;
            n2 = n3;
            cout<<twist(n3)<<" ";
        }
    }
}