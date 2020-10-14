#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    vector<int> a={9,7,0,2,12,1,17};int k=0;
    sort(a.begin(),a.end());
    for(int i=1;i<a.size();i++)
    {    int m=a[i]-a[i-1];
        if(m>k)
        k=m;

    }
    cout<<k;
    return 0;
}