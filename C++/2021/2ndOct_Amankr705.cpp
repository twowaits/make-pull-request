#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    vector<vector<int>> mat(r, vector<int>(c, 0));
    int i = 0, j = 0;
    int up = 1;

    for (int j = 1; j <= c; j++){
        mat[i][j - 1] = j;
        if (i == 0){
            up = 0;
        }
        if (i == (r - 1)){
            up = 1;
        }
        if (up == 1){
            --i;
        }else{
            ++i;
        }
    }
    cout <<endl;

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (mat[i][j] != 0)
                cout << mat[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
} 
