#include<iostream>
using namespace std;

int fact(int x)
{
	if (x <= 1)
		return 1;
	int result = 2;
	for (int i = 3; i <= x; i++)
		result = result * i;
	return result;
}

int gcd(int m, int n)
{
	return fact(min(m, n));
}

int main()
{
	int m,n;
    cin>>m>>n;
	cout << gcd(m, n);
	return 0;
}