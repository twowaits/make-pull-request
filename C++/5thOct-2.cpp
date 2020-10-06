#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int m=sqrt(n);
	if(m*m!=n)
		m++;
	int s[m][m];
	cout<<m<<"\n";
	int r1=0,c1=0,r2=m,c2=m,i;
	int cnt=1;
	while(r1<r2 && c1<c2)
	{
		for(i=c1;i<c2;i++)
				s[r1][i]=(cnt++);
		r1++;
		for(i=r1;i<r2;i++)
				s[i][c2-1]=(cnt++);
		c2--;
		if (r1<r2)
		{	for(i=c2-1;i>=c1;i--)
					s[r2-1][i]=(cnt++);
			r2--;
		}
		if(c1<c2){
			for(i=r2-1;i>=r1;i--)
					s[i][c1]=(cnt++);
			c1++;
		}
	}
	for(i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
			if(s[i][j]<=n)
				cout<<s[i][j]<<"\t";
			else
				cout<<" \t";
		cout<<"\n";
	}
	return 0;
}
