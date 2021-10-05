#include<bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);
#define furious   cin.tie(NULL);

void zig_zag_pattern(int height, int length){

    vector<vector<int>> matrix(height, vector<int>(length,0));

    int i = 0, j = 0;
    bool flag = true; 

    for(int j=1; j<=length; j++)
    {
        matrix[i][j-1] = j ;
        if(i==0){     
            flag = false;
        }
        if(i==(height-1)){
            flag = true;
        }
        if(flag) --i;
        else  ++i;
    }

cout<<"Zig-Zag Pattern\n";

    for (int i=0;i<height;i++){
        for (int j=0;j<length;j++){
        
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

    Fast furious
    //Input 7 16
    int height=7,length=16;

    zig_zag_pattern(height,length);

    return 0;
}
