#include<bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);
#define furious   cin.tie(NULL);

void zig_zag(int row, int col){

    vector<vector<int>> matrix(row, vector<int>(col,0));

    int i = 0, j = 0;
    bool flag = true; 

    for(int j=1; j<=col; j++)
    {
        matrix[i][j-1] = j ;
        if(i==0){     
            flag = false;
        }
        if(i==(row-1)){
            flag = true;
        }
        if(flag) --i;
        else  ++i;
    }

    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){

            if(matrix[i][j]!=0){
                    cout << matrix[i][j] <<" ";
            }
            else{
                    cout << "  ";
            }
        }
        cout<<endl;
    }

}

int main() {

    int row,col;
    cout << "Enter Number of rows: "; 
    cin >> row; 
    cout << "Enter Number of columns: "; 
    cin >> col; 

    zig_zag(row,col);

    return 0;
}