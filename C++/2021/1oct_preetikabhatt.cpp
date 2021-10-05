#include <iostream>
#include <math.h>
using namespace std;

bool primenumber(int c)
{
    if(c==1)
    return false;
    int i;
    for(i=2; i<c; i++)
    {
        if(c%i==0)
        return false;
    }
    return true;
}

int main()
{
  int i, n, a=1, b=0, c;
	cin>>n;
	for(i=0; i<n; i++)
	{
	    c=a+b;
	    a=b;
	    b=c;
	    if(primenumber(c) || c%5==0)
	    cout<<"0 ";
	    else
	    cout<<c<<" ";
	}
    return 0;
}
