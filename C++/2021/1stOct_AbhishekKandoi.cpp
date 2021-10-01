#include<bits/stdc++.h>
using namespace std;

bool is_prime(long long n)
{
    if(n <= 1)
        return false;
    
    else
    {
        for(int i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
                return false;
        }

        return true;
    }
}

bool div5(long long n)
{
    if(n % 5 == 0)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    long long a = 1, b = 1, c = 0;
    
    cout << a << " " << b << " ";
    for(int i = 3; i <= n; i++)
    {
        c = a+b;
        if(!is_prime(c) && !div5(c))
        {
            cout << c << " ";
        }

        else
            cout << 0 << " ";

        a = b;
        b = c;
    }

    cout << endl;
    return 0;
} 