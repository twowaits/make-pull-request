// CPP program to find GCD of factorial of two
#include <bits/stdc++.h>
using namespace std;

int factorial(int x)
{
	if (x <= 1)
		return 1;
	int res = 2;
	for (int i = 3; i <= x; i++)
		res = res * i;
	return res;
}

int gcdOfFactorial(int m, int n)
{
	return factorial(min(m, n));
}

int main()
{
	int m = 5, n = 9;
	cout << gcdOfFactorial(m, n);
	return 0;
}

