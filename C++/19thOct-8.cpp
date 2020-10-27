#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
   int t=2;while(t--){
   int a[5][5] = { { 1, 4, 7, 11, 15 }, 
                      { 2, 5, 8, 12, 19 }, 
                      { 3, 6, 9, 16, 22 }, 
                      { 10, 13, 14, 17, 24 },
					  { 18, 21, 23, 26, 30} 
					          }; 
	int n;//the number to be searched
	cin>>n;
	int i=0,j=4,flag=0;
	while(i<5&&j>=0)
	{
		if(a[i][j]<n) i++;
		else if(a[i][j]>n) j--;
		else { flag=1;break;}
	}
	if(!flag) cout<<"True"<<endl;
	else cout<<"False"<<endl;}
}
