#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
         return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    vector<int> ans;
    ans.push_back(1);
    ans.push_back(1);
    int a=1;
    int b=1;
    for(int i=2;i<n;i++)
    {
        int val = a+b;
        if(val%5==0)
          ans.push_back(0);
         else if(isprime(val))
         ans.push_back(0);
         else
          ans.push_back(val);
        a=b;
        b=val;

    }

    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";


}
