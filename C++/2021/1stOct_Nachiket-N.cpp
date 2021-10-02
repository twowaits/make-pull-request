#include <bits/stdc++.h>
using namespace std;

vector<int> SOE(vector<int> r);
vector<int> fibNums(int n); 

int main()
{
    int n;
    cout<<"Enter number of terms required:";
    cin>>n;
    vector<int> r = fibNums(n+1);
    r = SOE(r);
    for(int i=0; i<r.size(); i++)
        cout<<r[i]<<" ";
    return 0;
}

vector<int> SOE(vector<int> r)
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

vector<int> fibNums(int n)
{
    vector<int> r;
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
