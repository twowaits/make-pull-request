#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);cout<<setprecision(25);
#define pb push_back
typedef long long int ll;
ll M=1000000007;
using namespace std;
int main()
{
   
   	set<int>s;
   	s.insert(1);
   	s.insert(7);
   	s.insert(0);
   	s.insert(9);
   	s.insert(12);
   	int mx=-1e18;
   	auto it=s.begin();
   	while(next(it)!=s.end())
   	{
   		mx=max(mx,*next(it)-*it);
   		it=next(it);
	}
   	cout<<mx<<endl;
   
}