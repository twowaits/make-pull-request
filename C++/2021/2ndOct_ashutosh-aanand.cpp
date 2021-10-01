#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int row,col;
	cin>>row>>col;

	int grid[row][col];
	memset(grid, 0, sizeof(grid));
	int r = 0;
	
	for(int c=0;c<col;c++){
		grid[r][c] = c+1;

		if(row <= 1) continue;
		int p = c/(row-1);
		if(p&1) r--;
		else r++;
	}
    
	for(int r=0;r<row;r++){
		for(int c=0;c<col;c++){
			if(grid[r][c]==0) cout<<" ";
			else cout<<grid[r][c];
			cout<<" ";
		}
		cout<<"\n";
	}
}