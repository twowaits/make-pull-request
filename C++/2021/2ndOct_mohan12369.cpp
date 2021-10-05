#include <iostream>
using namespace std;
int main() {

    int r= 0;
    int c=0;
    cin>>r>>c;

    int modulus = ((r-1)  * 2);

    for (int i = 0; i < r; ++i){
        for (int j = 0; j < c; ++j){

        int modCol = (j % modulus);
        if (modCol >= r){
            modCol -= r;
            modCol = ((r - 1) - (modCol + 1));
        }

        if (modCol == i)
            cout<<j+1;
        else
         cout<<" ";
        
    }
    printf("\n");
}
    return 0;
}