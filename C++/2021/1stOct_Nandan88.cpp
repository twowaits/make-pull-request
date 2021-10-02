#include<bits/stdc++.h>

using namespace std;

bool isprime(int x){
    int f=1;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            f=0;
            break;
        }
    }
    if(f==1){
        return 1;
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    int a=1,b=1,c;
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<1<<" ";
        }
        else if(i==1){
            cout<<1<<" ";
        }
        else{
            c=a+b;
            if(isprime(c) || c%5==0){
                cout<<0<<" ";
            }
            else{
                cout<<c<<" ";
            }
            a=b;
            b=c;
        }
        
    }
    
    return 0;
}

