#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;

	return true;
}

int fibonacci(int n)
{
	int a = 1, b = 1, c, i;
	if( n == 0)
		return 0;
    else if ( n == 1 )
    {
        cout << "1 ";
        return 0;
    }
    cout << "1 1 ";
	for(i = 3; i <= n; i++)
	{
        c = a + b;
        if ( c % 5 != 0 && !isPrime( c ))
        cout << c << " ";
        else
        cout << "0 ";
        a = b;
        b = c;
	}
	return b;
}

int main()
{
	int n = 0;
	cout << " Please enter the value of a n:";
    cin >> n;
	fibonacci(n);
	return 0;
}