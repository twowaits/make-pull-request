#include <bits/stdc++.h>
#define IOS                  \
	ios::sync_with_stdio(0); \
	cin.tie(0);              \
	cout.tie(0);
#define endl "\n"
#define ll long long int 
#define pb push_back
#define ii pair<int,int>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<ii>
#define pq priority_queue<int,vi,greater<int> >
using namespace std;
int main()
{
   IOS;
    int rows,columns;
    cout<<"enter number of rows"<<endl;
    cin>>rows;
    cout<<"enter number of column"<<endl;
    cin>>columns;
    cout<<endl;
    int ans=((rows-1)* 2);

    for (int i=0;i<rows;i++)
{
    for (int j=0;j<columns;j++)
    {
        int res=(j%ans);
        if (res>=rows)
        {
            res-=rows;
            res= ((rows - 1) - (res+ 1));
        }

        if (res== i)
        {
            cout<<j+1;
        }
        else
        {
            cout<<" ";
        }
    }
   cout<<endl;
}
    return 0;
} 
