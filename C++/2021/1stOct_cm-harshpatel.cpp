//Program for twisted fibonacci series
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int e)
{

    if (e <= 1)
    {
        return false;
    }
    for (int i = 2; i < e; i++)
    {
        if (e % i == 0)
        {
            return false;
        }
    }
    return true;
}

void fibonacci(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            v.push_back(1);
        }
        else
        {
            v.push_back(v[i - 2] + v[i - 1]);
        }
    }
}

void twist(vector<int> &v, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 5 == 0 || isPrime(v[i]))
        {
            v[i] = 0;
        }
    }

    for (auto e : v)
    {
        cout << e << " ";
    }
    cout << endl;
}

int main()
{

    int N;
    cin >> N;
    vector<int> v;
    fibonacci(v, N);
    twist(v, N);
    return 0;
}