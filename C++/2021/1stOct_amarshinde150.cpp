#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=(n/2);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int fibonacci(int n){
    if(n<=2){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int number;
    cin>>number;
    for(int i=1;i<=number;i++){
        int x=fibonacci(i);
        if(isPrime(x)||x%5==0){
            cout<<0<<" ";
        }
        else{
            cout<<x<<" ";
        }
    }
    return 0;
}
