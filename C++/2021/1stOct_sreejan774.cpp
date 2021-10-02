#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}


void printSeries(int n){

    int a = 1, b=1;
    cout<< a << ' ' << b << ' ';
    int c = 0;
    for(int i=2;i<n;i++){
        c = a+b;
        if( c % 5 == 0 || isPrime(c)){
            cout<< 0 << ' ';
        }else{
            cout<< c << ' ';
        }
        a = b;
        b = c;
    }
    return ;
}



int main(){
    int n;
    cin>>n;
    printSeries(n);
    return 0;
}