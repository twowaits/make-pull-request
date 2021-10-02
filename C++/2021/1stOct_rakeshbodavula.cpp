#include<iostream>
#include<vector>
using namespace std;

int isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

vector<int> fibonacci_twist(int n){
    vector<int>fib;
    fib.push_back(1);
    fib.push_back(1);
    for(int i=2;i<n;i++){
        int term=fib[i-1]+fib[i-2];
        fib.push_back(term);
    }
    for(int i=2;i<n;i++){
        if(fib[i]%5==0 || isprime(fib[i])) fib[i]=0;
    }
    return fib;
}



int main(){
    int n;
    cout<<"Enter the number of terms required: ";
    cin>>n;
    vector<int> series=fibonacci_twist(n);
    cout<<"The sequence is: ";
    for(int i=0;i<n;i++){
        cout<<series[i]<<" ";
    }
    return 0;
}