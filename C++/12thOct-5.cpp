#include <bits/stdc++.h>
using namespace std;
int main()
{
	int z=0,o=0,t=0,i;
	int ar[]={0, 0, 1, 1, 1, 2, 2};
	int len = sizeof(ar)/sizeof(ar[0]);
	for(i=0;i<len;i++)
	{
		if(ar[i]==0)
			z++;
		else if(ar[i]==1)
			o++;
		else if(ar[i]==2)
			t++;
	}
	cout<<"{";
	for(i=0;i<z;i++)
	{
	    if(i==z-1)
	    {
	        cout<<"0";
	    }
	    else
		    cout<<"0, ";
	}
	for(i=0;i<o;i++)
	{
		cout<<", 1";
	}
	for(i=0;i<(t-1);i++)
	{
		cout<<", 2";
	}
	cout<<", 2}";
}
