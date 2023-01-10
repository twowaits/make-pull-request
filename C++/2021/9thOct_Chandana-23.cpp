#include <iostream>
using namespace std;


int factorial(int x)
{
	if (x<=1)
	{
		return 1;
	}
	return x*factorial(x-1);
		
}
int main()
{
	int a,b;
	cin>>a>>b;
	a = factorial(a);
	b = factorial(b);
	int result = a>b?a:b;
	cout<<result;
	return 0;
}
