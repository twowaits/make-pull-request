#include <bits./stdc++.h>
using namespace std;

bool prime(long int n)
{
    bool prime = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            prime = false;
            return prime;
        }
    }
    return prime;
}
int main()
{
    long int n;
    cin >> n;
    int a = 0, b = 1;
    cout<<"1 ";
    for (int i = 1; i < n; i++)
    {
        long long int sum = a + b;
        if(sum==1)
        {
            cout<<sum<<" ";
        }
        else if (prime(sum))
        {
            cout << "0 ";
        }
        else if (sum % 5 == 0)
        {
            cout << "0 ";
        }
        else
        {
            cout << sum << " ";
        }
        a = b;
        b = sum;
    }
    return 0;
}