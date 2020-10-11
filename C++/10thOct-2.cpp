#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    string str[26];
    vector<string>v;
    for(int i=0;i<2;i++)
    {
        cin>>str[i];
    }
    for(int i=0;i<2;i++)
    {
        string k=str[i];
        reverse(k.begin(),k.end());
        v.push_back(k);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
