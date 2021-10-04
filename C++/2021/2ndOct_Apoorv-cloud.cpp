#include<bits/stdc++.h>
using namespace std;

void zig(int r, int c){
	int n = 1;
	string m[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			m[i][j] = " ";
		}
	}	
	int col = 0;

	bool flow = true;

	while(col<c){
        if(flow){
			for(int i = 0;i<r && col<c;i++){
				m[i][col] = to_string(n);
				n++;
				col++;
			}
			flow = !flow;
		}else{
			for(int i=r-2;i>0 && col<c; i--){
				m[i][col] = to_string(n);
				n++;
				col++;
			}
			flow = !flow;			             
		}
	}
	for(int i=0;i<r;i++){
		for(int col=0;col<c;col++){
			cout<<m[i][col]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int r, c; 
	cin>>r>>c;
	zig(r,c);
	return 0;
}