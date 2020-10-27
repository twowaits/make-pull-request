#include <iostream>
using namespace std;

int main()
{
    int a[10][10];
	int m,n;
	cout<<"Enter no. of row and column  (should be less than 10 each)------";
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		cin>>a[i][j];
	int l,p=0;
	int v;
	cout<<"Enter the no to be searched";
	cin>>l;
	for(int i=0;i<m;i++)
	{
	if(a[i][0]>l)
	{
	v=0;
	break;
	}
	else
	if(a[i][0]==l)
	{v=1;
	break;
	}
	else
	{
		for(int j=1;j<n;j++)
		{
			if(a[i][j]>l)
	        {
	        break;
	        }
	        else
	        if(a[i][j]==l)
			{p=1;
	        break;
			}
	        else
			continue;
		}
	}
	if(p==1)
	{v=1;
	break;
	}
	}
	if(v==1)
	cout<<"-------------- True --------------";
	else
	cout<<"-------------- False --------------";
	
}