#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int n;
vector<ll> fib;

//function to check prime
bool is_prime(ll val)
{
	if(val <= 1)
		return false;
	if(val <= 3)
		return true;

	if(val % 2 == 0)
		return false;

	ll sqrtval = sqrt(val) + 1;
	for (ll i = 3; i <= sqrtval; i += 2)
	{
		if(val % i == 0)
			return false;
	}

	return true;
}

int main()
{
	cin >> n;

	if(n > 92)
	{
		cout << "Fibonacci Numbers out of range of 'Long Long' Data type.\n";
		cout << "Please use a lower value of n.\n";	
		return 0;
	}

	fib = vector<ll> (n+1);
	fib[1] = fib[2] = 1;
	for (int i = 1; i <= n; ++i)
	{
		if(i <= 2)
		{
			cout << fib[i] << " ";
			continue;
		}

		fib[i] = fib[i-1] + fib[i-2];
		if(fib[i] % 5 == 0 || is_prime(fib[i]))
			cout << "0 ";
		else
			cout << fib[i] << " ";
	}
	cout << "\n";

	return 0;
}