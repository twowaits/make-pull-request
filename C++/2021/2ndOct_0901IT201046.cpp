#include<bits/stdc++.h>

using namespace std;

int main()
{
	int r,c;
	cin>>r>>c;
	int i,j,f;
	for(i=1;i<=r; )
	{
		f=0;
		for(j=1;j<=c;j++)
		{
			if((j/r)%2==0)
			{
				if(i==j)
				{
					cout<<j<<" ";
				}
				else if(j>i)
				{
					if(i==j-2*r+1)
					{
						cout<<j<<" ";
					}
				}
				else
				{
					cout<<" ";
				}
				f=1;
			}
			else if((j/r)%2==1)
			{
				if(i+j==2*r)
				{
					cout<<j<<"  ";
				}
				else
				{
					cout<<" ";
				}
				if(i==1)
					{
						f=1;
					}
					else
					{
						f=2;
					}
			}
		}
		if(f==1)
		{
			i++;
		}
		else if(f==2)
		{
			i--;
		}
		cout<<"\n";
	}
	return 0;

}
