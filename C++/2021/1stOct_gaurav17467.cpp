#include<iostream>
#include<vector>
using namespace std;
#define ll long long int
bool prime (ll a)
{
	for(int i=2;i*i<=a;i++)
	{
		if(a%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	ll n;
	cin>>n;
	vector<ll> fib(n,0);
	fib[0]=1;
	fib[1]=1;
	for(int i=2;i<n;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	for(int i=0;i<n;i++)
	{
		if(i==0||i==1)
		{
			cout<<fib[i]<<" ";
		}
		else if(fib[i]%5==0||prime(fib[i]))
		{
			cout<<0<<" ";
		}
		else
		{
			cout<<fib[i]<<" ";
		}
	}
	cout<<endl;
	return 0;
}