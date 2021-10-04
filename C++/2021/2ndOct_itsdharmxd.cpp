
#include <bits/stdc++.h>
using namespace std;

int main(){
    int row, column;
    cin >> row >> column;
    vector<vector<int>> matrix(row, vector<int>(column,0));

    int i = 0, j = 0;
    bool down = true;
    while(j<column){
        matrix[i][j] = j + 1;
       if(i==0){
           down = true;
       }else if(i==(row-1)){
           down = false;
       }

        if(down){
            i++;
        }else{
            i--;
        }
        j++;
    }

    for (int i = 0; i < row;i++){
        for (int j = 0; j < column;j++){
            if(matrix[i][j]!=0){
                cout << matrix[i][j] << " ";
            }else{
                cout << "  ";
            }
            
        }
        cout << endl;
    }
}