#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int tt=0;tt<t;tt++)
	{
	    int n,x;
	    cin>>n;
	    unordered_map<int,int> map;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        map[x]++;
	    }
	    int flag=0;
	    for(int i=0;i<n;i++)
	    {
	        if(map[n]>n/2)
	        {
	            cout<<n<<endl;
	            flag=1;
	            cout<<"no."<<map[n];
	            break;
	            
	        }
	    }
	    if(flag==0)
	    {
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
