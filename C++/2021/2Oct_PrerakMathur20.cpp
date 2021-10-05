#include <bits/stdc++.h>
using namespace std;
int main()
{
	int row, col;
	cin >> row >> col;
	if(row == 1){
		for(int i=1;i<=col;i++){
			cout << i << " ";
		}
		cout << endl;
		return 0;
	}
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			string x = to_string(j);
			int k;
			if(j < row) k = 0;
			else k = (j-1-row)/(2*row-2) + 1;
			if(abs(j-(1+k*(2*row-2)))==i-1){
				cout << x;
			}
			else{
				for(char c:x) cout << " ";
			}
		}
		cout << endl;
	}
}