#include<bits/stdc++.h>
using namespace std;

bool findNumber(int matrix[][7], int num){
	if(matrix[0][0] > num) return false;
	for(int i = 0;i<5;i++){
		if(num < matrix[i][0]) return false;
		for(int j = 0 ; j< 5; j++){
			if(num < matrix[i][j]) break;
			if(num == matrix[i][j]) return true;
		}
	}
	return false;
}

int main(){
	int arr[7][7];
	arr[0][0] = 1;
	arr[0][1] = 4;
	arr[0][2] = 7;
	arr[0][3] = 11;
	arr[0][4] = 15;
	arr[1][0] = 2;
	arr[1][1] = 5;
	arr[1][2] = 8;
	arr[1][3] = 12;
	arr[1][4] = 19;
	arr[2][0] = 3;
	arr[2][1] = 6;
	arr[2][2] = 9;
	arr[2][3] = 16;
	arr[2][4] = 22;
	arr[3][0] = 10;
	arr[3][1] = 13;
	arr[3][2] = 14;
	arr[3][3] = 17;
	arr[3][4] = 24;
	arr[4][0] = 18;
	arr[4][1] = 21;
	arr[4][2] = 23;
	arr[4][3] = 26;
	arr[4][4] = 30;
	
	printf("%s\n", findNumber(arr,30) ? "true" : "false");
}
