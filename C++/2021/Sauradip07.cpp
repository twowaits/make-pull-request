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
			if(j%(2*row-2) == i or ((2*row-j)%(2*row-2) == i%(2*row-2))){
				cout << x;
			}
			else{
				for(char c:x) cout << " ";
			}
		}
		cout << endl;
	}
    return 0;
} 
