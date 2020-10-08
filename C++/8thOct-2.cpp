#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int base=n+n-1;
    int mid=base/2;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<base;j++)
        {
            if(j==mid-i+1 || j==mid+i-1) 
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"* ";
    }cout<<endl;
}