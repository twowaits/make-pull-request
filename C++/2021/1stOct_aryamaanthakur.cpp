/*
*   Author: aryamaanthakur
*   Created: 01-10-2021 11:27:44
*/

#include <iostream>
using namespace std;

bool isprime(int n){
    
    if(n == 1) return false;
    for(int i = 2;i*i<=n;i++) {
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a=0, b=1, temp=1;

    for(int i=0; i<n; i++)
    {
        if(b%5==0 || isprime(b)){
            cout<<0<<" ";    
        } else {
            cout<<b<<" ";
        }
        
        b = a+b;
        a = temp;
        temp = b;
    }

    return 0;
}