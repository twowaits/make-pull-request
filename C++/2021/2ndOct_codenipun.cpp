// LOGIC : The logic to pring this zigzag is quite simple, sometimes we have proceed from top to bottom and sometimes from bottom to top, so to ensure that we make a bool variable 
// topToBottom, if this is true then proceed from top to bottom and print numbers in an increasing manner and if it is false then we proceed from bottom to top and print numbers
// again in an increasing manner
// And to store to number we take a string matrix whose all initial values are a space and we replace some space while we proceed according to above logic.

#include<bits/stdc++.h>
using namespace std;

void printZigZag(int row, int column){
	int n = 1;
	string m[row][column];
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			m[i][j] = " ";
		}
	}	
	int col = 0;
	bool topToBottom = true;

	while(col<column){
        if(topToBottom){
			for(int i = 0;i<row && col<column;i++){
				m[i][col] = to_string(n);
				n++;
				col++;
			}
			topToBottom = !topToBottom;
		}else{
			for(int i=row-2;i>0 && col<column;i--){
				m[i][col] = to_string(n);
				n++;
				col++;
			}
			topToBottom = !topToBottom;			             
		}
	}
	for(int i=0;i<row;i++){
		for(int col=0;col<column;col++){
			cout<<m[i][col]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int row, column; cin>>row>>column;
	printZigZag(row,column);
	return 0;
}
