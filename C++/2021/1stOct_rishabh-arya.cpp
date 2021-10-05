#include <bits/stdc++.h>
using namespace std;

int arr[1000001];
void sieve()
{

    for (int i = 1; i <= 1000000; i++)
        arr[i] = 1;

    arr[0] = arr[1] = 0;

    for (int i = 2; i * i <= 1000000; i++)
    {
        if (arr[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                arr[j] = 0;
            }
        }
    }
}

vector<long long> printFibb(int n)
{
    vector<long long> ans(n);
    ans[0] = 1;
    if (n == 1)
    {
        return ans;
    }
    ans[1] = 1;
    if (n == 2)
        return ans;

    for (int i = 2; i < n; i++)
    {
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    sieve();
    vector<long long> ans = printFibb(n);
    for (int i = 0; i < ans.size(); i++)
    {
        if (arr[ans[i]] == 1 || ans[i] % 5 == 0)
            cout << 0 << " ";
        else
            cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
