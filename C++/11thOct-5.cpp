#include <iostream>
using namespace std;
int main()
{
	long long int t,i,n,m;
	cin>>t;
	n=1;
	m=1;
	for(i=0;i<t;i++)
	{
		cout<<n<<" ";
		cout<<m<<" ";
		n=n+m;
		m=n+m;
		i++;
	}
}
