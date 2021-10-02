#include <iostream>

using namespace std;

bool isPrime(long n)
{
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		return false;
	}
	return  true;
}

int main()
{
	int n;
	cin>>n;
	
	long a=1,b=1;
	
	if(n==1)
	cout<<"1";
	else
	{
		cout<<"1 1 ";
		
		for(int i=3;i<=n;i++)
		{
			long c=a+b;
			a=b;
			b=c;
			if(!isPrime(c) && c%5!=0)
			cout<<c<<" ";
			else
			cout<<"0 ";
		}
	}
}
