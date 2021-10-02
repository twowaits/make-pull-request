#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
bool prime[100000001];
void seive()
{
    int n = 100000000;  prime[1] = false;
    for ( int i = 2 ; i <= n ; i++ )
        prime[i] = true;
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
        for (int i = p * p; i <= n; i += p)
            prime[i] = false;
        }
    }
}
int main()
{
    seive();
    int n; cin >> n;
    int prev = 0, curr = 1;
    for ( ll i = 1 ; i <= n ; i++ )
    {
        if ( curr%5 != 0 && !prime[curr])
            cout << curr << " ";
        else
            cout << 0 << " ";
        int t = prev;
        prev = curr;
        curr += t;
    }
    cout << endl;
    return 0;
}
