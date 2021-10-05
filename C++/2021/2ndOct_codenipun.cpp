// LOGIC : the idea is quite simple, sometimes we need to proceed from top to bottom and sometimes from bottom to top so to ensure that we made a boolean variable whose true value 
// indicate to proceed from top to bottom  and print value in an increasing manner and whose false value indicate to proceed from bottom to top and print values again in an 
// increasing manner. To store those value we made a string matrix whose all initial value are a space (" ") and replace some values while proceeding according to above logic

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
