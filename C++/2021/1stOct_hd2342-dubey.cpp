#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define si stack<int>
#define qi queue<int>
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)

vi change_value_number(vi r)
{
    int n = r[r.size()-1];
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for(int i=0; i<r.size(); i++)
        if(prime[r[i]]==true || r[i]%5==0)
            r[i] = 0;
    return r;
}

vi Fibonacci_Numbers(int n)
{
    vi r;
    int f1 = 0, f2 = 1, i;

    if (n < 1)
        return r;
    for (i = 1; i < n; i++) {
        r.push_back(f2);
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
    return r;
}

// Driver Code
int main()
{
    int n;
    cout<<"Enter number of terms required:";
    cin>>n;
    vi r = Fibonacci_Numbers(n+1);
    r = change_value_number(r);
    for(int i=0; i<r.size(); i++)
        cout<<r[i]<<" ";
    return 0;
} 