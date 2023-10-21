#include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
	// Corner case
	if (n <= 1)
		return false;

	// Check from 2 to square root of n
	for (int i = 2; i*i<=n; i++)
		if (n % i == 0)
			return false;

	return true;
}

int fibonacci(int n)
{
	int a = 1, b = 1, c, i;
    //Corner case
	if( n == 0)
		return 0;
    else if ( n == 1 )
    {
        cout << "1 ";
        return 0;
    }
    //Starting values
    cout << "1 1 ";
	for(i = 3; i <= n; i++)
	{
        c = a + b;
        //Condition check
        if ( c % 5 != 0 && !check( c ))
        cout << c << " ";
        else
        cout << "0 ";
        //Values change for ext iteration 
        a = b;
        b = c;
	}
	return b;
}
int main()
{
	int n;
	cin>>n;
	fibonacci(n);
	return 0;
}
