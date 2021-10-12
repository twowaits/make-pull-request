#include <iostream>
using namespace std;
int main() {
    int row,col;
    cin >> row >> col;
    int mat[row][col];
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            mat[i][j] = 0;
        }
    }

    int j = 0,i = 0;
    bool br = false;
    int cnt = 1;
    while(cnt <= col){
        for(;i < row;i++,j++){
           if(j >= col){
             br = true;
             break;
           }
           mat[i][j] = cnt;
           cnt++;
        }
        if(br){
            break;
        }
        for(i = row-2;i >= 0;i--,j++){
            if(j >= col){
                br = true;
                break;
            }
           mat[i][j] = cnt;
           cnt++;
        }
        i = 1;
    }

    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            if(mat[i][j] > 0){
                cout << mat[i][j];
            }
            else{
                cout << "  ";
            }
        }
        cout << "\n";
    } 

}
