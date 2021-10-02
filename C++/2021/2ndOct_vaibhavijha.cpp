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

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    bool down = true;
    memset(arr, -1, sizeof(arr));
    int row=0; 
    for(int col=0; col<m; col++){
        if(row==0)
            down=true;
        else if(row==n-1)
            down=false;
        arr[row][col]=col+1;
        if(down)
            row++;
        else
            row--;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]!=-1)
                cout<<arr[i][j];
            else   
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}