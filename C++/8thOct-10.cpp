#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<2*n;j++){
            if(i+j==(n-1) || abs(i-j)==n-1){
                cout<<"*";
            }
            else if(i==n-1 && j%2==0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
