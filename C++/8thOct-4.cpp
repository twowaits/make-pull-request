#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < (n-i-1); j++) cout<<" ";
        cout<<"*";
        for (int j= 0; j < (2*i); j++) cout<<" ";
        if (i > 0) cout<<"*";
        cout<<endl;
    }
    for (int i = 0; i < n; i++) cout<<"* ";
    return 0;
}
