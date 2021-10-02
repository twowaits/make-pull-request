// Added the code for fibonacci series upto n terms.
// poojaagrawal134
// Fibonacci Series with a Twist


#include <iostream>
using namespace std;

//Function to check Prime or not , Returns boolen value
bool check_prime(int n){
    if (n <= 1)
        return false;
        // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

//Function to create Fibonacci up to number n
int Fibonacci(int n)
{
	if (n <= 1)
	{
		return n;
	}
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

//main function

int main()
{
	int n;
    cout<<"ENTER THE VALUE OF n";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (Fibonacci(i) % 5 == 0 || check_prime(Fibonacci(i)))
		{
			cout << "0 ";
		}
		else
		{
			cout << Fibonacci(i) << " ";
		}
	}

	return 0;
}
