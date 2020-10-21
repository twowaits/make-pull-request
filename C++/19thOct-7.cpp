#include <iostream>
using namespace std;
int main()
	{
		int i,j,m,n,x,c=0;
		cin>>m>>n;
		int a[m][n];
		
		for(i=0;i<m;i++)
		{
		   for(j=0;j<n;j++)
		   cin>>a[i][j];
		}
		cin>>x;

	    for(i=0;i<m;i++)
		{
		   for(j=0;j<n;j++)
		   {
		       if(a[i][j]==x)
		       {c=1; break;}
		       else if(a[i][j]>x)
		       {break;}
		   }
		   if( ((i<m-1) && (a[i+1][0]>x)) || (c==1) )
		   break;
		}
		
		if(c==1)
		cout<<"True"<<endl;
		else
		cout<<"False"<<endl;
		return 0;
	}
