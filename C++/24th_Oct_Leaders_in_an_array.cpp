#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int tt=0;tt<t;tt++)
	{
	    int n;
	    cin>>n;
	    int x;
	    vector<int> temp,v;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        temp.push_back(x);
	    }
	    v.push_back(temp[temp.size()-1]);
	    int m=temp[temp.size()-1];
	    for(int i=temp.size()-1;i>0;i--)
	    {
	        if(temp[i-1]>=m){
	        v.push_back(temp[i-1]);
	        m=temp[i-1];
	        }
	    }
	    for(int i=v.size()-1;i>=0;i--)
	    {
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
