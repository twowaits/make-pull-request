#include <iostream>
#include <math.h>
using namespace std;

bool prime(long c)
{
    if(c==1)
    return false;
    for(long i=2; i<=(long)sqrt(c); i++)
    {
        if(c%i==0)
        return false;
    }
    return true;
}

int main()
{
  int i, n;
	long a=1, b=0, c;
	cin>>n;
	for(i=0; i<n; i++)
	{
	    c=a+b;
	    a=b;
	    b=c;
	    if(prime(c) || c%5==0)
	    cout<<"0 ";
	    else
	    cout<<c<<" ";
	}
    return 0;
}
