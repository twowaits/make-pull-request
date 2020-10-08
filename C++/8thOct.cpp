
#include <iostream>

using namespace std;

void hollowPyramid(int n){
    
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n-i;j++)
        cout<<" ";
        
        if(i==1 || i==n){
            for(int j=1;j<=i;j++)
            cout<<"* ";
        }
        else{
            cout<<"*";
            for(int j=1;j<=2*i-3;j++)
            cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int x;
    cin>>x;
    hollowPyramid(x);
    return 0;
}
