/*
	ZigZag Problem
	Add following functionalities to it :
	Take input of number of rows and columns.
	Print the following zigzag pattern.
	Sample Input :
	7 16
	Sample Output :
	1                       13
	  2                  12  14
	    3              11        15
	      4          10             16
	        5      9
	          6  8
	            7
*/
#include <bits/stdc++.h>
#define FIO ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

int32_t main() {
	FIO
	int n, m;
	cin >> n >> m;
	int a[n][m];
	memset(a, -1, sizeof(a));
	bool below = true;
	int r = 0;
	for (int c = 0; c < m; c++) {
		if (r == 0) {
			below = true;
		}
		else if (r == n - 1) {
			below = false;
		}
		a[r][c] = c + 1;
		if (below) {
			r++;
		}
		else {
			r--;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != -1) {
				cout << a[i][j] << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}  