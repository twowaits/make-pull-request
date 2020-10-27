/*
    "Hollow Pyramid"
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=n,b=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<(n*2);j++){
            if(j==a||j==b||(i==n && j%2!=0)){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
           
        }
        --a;
        ++b;
        cout<<endl;
    }

    return 0;
}
