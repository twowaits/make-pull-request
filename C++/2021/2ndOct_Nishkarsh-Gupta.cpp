Here is the code for the required functionality: 
// ZigZag Problem
// Add following functionalities to it :

// Take input of number of rows and columns.
// Print the following zigzag pattern.
// Sample Input :
// 7 16

// Sample Output :

// 1                       13 
//   2                  12  14
//     3              11        15
//       4          10             16
//         5      9
//           6  8
//             7

// ---------code --------

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void makePattern(int n, int m) {
    int grid[n][m];
    // initilizating the grid with -1
    memset(grid, -1, sizeof(grid));
    
    // goDown to check whether to go up or down
    bool goDown = true;
    int row = 0;
    for(int col=0; col<m; col++) {
        if(row == 0) {
            goDown = true;
        }
        else if(row == n-1) {
            goDown = false;
        }
        grid[row][col] = col + 1;
        if(goDown) {
            row++;
        }
        else {
            row--;
        }
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(grid[i][j] == -1) {
                cout << "  ";
            }
            else {
                cout << grid[i][j] << " ";
            }
        }
        cout << endl;
    }
    return;
}

int main() {
        // for fast input output 
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    
	int n, m;
	cin >> n >> m;
	makePattern(n, m);
	return 0;
}
