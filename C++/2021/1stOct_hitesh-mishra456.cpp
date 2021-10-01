#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if((n/i)!=i)
                cnt++;
        }
    }
    if(cnt==2){
        return true;
    }
    else{
        return false;
    }
}

void printfibonacciwithtwist(long long n){
    long long first=1;
    long long second=1;
    cout<<first<<" "<<second<<" ";
    for(int i=3;i<=n;i++){
        long long currentelement=first+second;
        if(isPrime(currentelement)||currentelement%5==0){
            cout<<"0"<<" ";
        }
        else{
            cout<<currentelement<<" ";
        }
        first=second;
        second=currentelement;
    }
}

int main(){
    long long n;
    cin>>n;
    printfibonacciwithtwist(n);
    return 0;
}
