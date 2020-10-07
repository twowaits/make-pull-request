#include <iostream>
#include <cassert>
#include<vector>

using namespace std;

// function to check if a number is prime
bool is_prime(int x){
    if (x == 0 || x == 1) {
        return false;
    }
    else {
        for (int i = 2; i <= x / 2; ++i) {
            if (x % i == 0 ) {
                return false;
            }
        }
    }
    return true;
}
// function to print numbers fibonacci numbes iwth a twist
void fibonacci_twist(int n) {
    // write your code here
    int fib[n]; //fibonacci number
    fib[0]=0;
    fib[1]=1;
    cout<<fib[1]<<" ";
    for(int i=2;i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        if(!is_prime(fib[i]) && fib[i]%5!=0){
            cout<<fib[i]<<" ";
        }
        else{
            cout<<0<<" ";
        }
    }
    cout<<endl;
}


int main() {
    
    int n = 0;
    while(cin>>n)// inputs the value till the user enters
        fibonacci_twist(n);
        
    return 0;
}
