#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e8;
bool isPrime[MAX+1];
int dp[MAX];

int fib(int n)
{
	if(n==1 || n==2)
		return dp[n] = 1;
	if(dp[n] != -1)
		return dp[n];
	return dp[n] = fib(n-1) + fib(n-2);
}

int main() 
{
	for(int i=2; i<=MAX; i++)
		isPrime[i]=1;
	isPrime[0]=0;
	isPrime[1]=0;
	for(int i=2; i*i<=MAX; i++)
	{
		if(isPrime[i]==1)
		{
			for(int j=i*i; j<=MAX; j+=i)
				isPrime[j]=0;
		}
	}

	for(int i=1; i<MAX; i++)
		dp[i]=-1;

	int n;
	cin >> n;
	fib(n);
	for(int i=1; i<=n; i++)
	{
		if(isPrime[dp[i]]==1 || dp[i]%5==0)
			cout << 0 << " ";
		else
			cout << dp[i] << " ";
	}

	return 0;
}
