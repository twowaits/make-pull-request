#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;cin>>n;
    int c=ceil(sqrt((float)n));
    int arr[c][c];  //answer 2-d array
    int r1 = 0,c1 = 0,r2 = c,c2 = c,num = 1;

	while (r1 < r2 && c1 < c2) {
		for (int i = c1; i < c2; i++) arr[r1][i] = num++;
		r1++;
		for (int i = r1; i < r2; i++) arr[i][c2 - 1] = num++;
		c2--;
		for (int i = c2 - 1; i >= c1; i--) arr[r2 - 1][i] = num++;
		r2--;
		for (int i = r2 - 1; i >= r1; i--) arr[i][c1] = num++;
		c1++;
	}
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(arr[i][j]>n)cout<<"  ";
            else
            cout<<arr[i][j]<<" ";   
        }
        cout<<"\n";
    }
    
}