#include<bits/stdc++.h>
#define ll long long int
#define all(c) (c).begin(),(c).end()
#define endl '\n'
using namespace std;

void entente()
{
	int row , col;  cin >> row >> col;

	vector<vector<int>> v(row,vector<int>(col,0)); //to store column wise strings

	int count = 1 , i = 0 , j = 0;
	bool go_down = true;
	while ( count <= col )
	{
		v[i][j] = count;
		if ( go_down )
		{
			i++; j++;
			if ( i == row-1 )
				go_down = !go_down;
		}
		else
		{
			i--; j++;
			if ( i == 0 )
				go_down = !go_down;
		}
		count++;
	}
	for ( int i = 0 ; i < row ; i++ )
	{
		for ( int j = 0 ; j < col ; j++ )
		{
			if ( v[i][j] == 0 ) cout << " ";
			else cout << v[i][j];
		}
		cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	entente();
	return 0;
}
