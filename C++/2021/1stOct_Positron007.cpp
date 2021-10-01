//Fibonacci Series with a Twist

#include<bits/stdc++.h>
using namespace std;

// function to check whether a number
// is prime or not
bool isPrime(int n)
{
	// Corner case
	if (n <= 1)
		return false;

	for (int i = 2; i <= sqrt(n); i++) //square root of n time complexity
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
        if ( c % 5 != 0 && !isPrime( c ))
        cout << c << " ";
        else
        cout << "0 ";
        //Values change for ext iteration 
        a = b;
        b = c;
	}
	return b;
}

// Driver code
int main()
{
	int n = 0;
	cout << " Please enter the value of n : ";
    cin >> n;
	fibonacci(n);
	return 0;
}
