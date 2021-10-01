//Program for Fibonacci Series with a Twist using c++

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	a[1] = 1;
	a[2] = 1;
	for(i=3;i<=n;i++)
	{
		a[i] = a[i-1]+ a[i-2];
	}
	for(i=1;i<=n;i++)
	{
		if(i==1||i==2)
		{
			cout<<"1"<<" ";
		}
		if(a[i]==2)
		{
			cout<<"0"<<" ";
		}
		else if(a[i]%5==0)
		{
			cout<<"0"<<" ";
		}
		else if(a[i]>2)
		{
			int t,f=0;
			t = a[i]-1;
			while(t>1)
			{
				if(a[i]%t==0)
				{
					f=1;
				}
				t--;
			}
			if(f==1)
			{
				cout<<a[i]<<" ";
			}
			else
			{
				cout<<"0"<<" ";
			}
		}
		
	}
	return 0;
}
