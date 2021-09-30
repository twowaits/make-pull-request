// code for Fibonacci Series with a Twist

#include<bits/stdc++.h>
using namespace std;

// Function to check prime number
bool isPrime(int n){
    if (n == 1) {
        return false;
    }

    int i = 2;
    while (i*i <= n) {
        
        if (n % i == 0) {
            return false;
        }
        i += 1;
    }
    return true;
}
void printFibonacci(int n){
    int a = 1;
    int b = 1;
    int c;
    cout<<a<<" "<<b<<" ";
    while(n-2>0){
        c = a+b;
        a = b;
        b = c;
        if(isPrime(c) || c%5==0){
            c = 0;
        }
        cout<<c<<" ";
        n--;
    }
}
int main(){
    int n; cin>>n;
    printFibonacci(n);
    return 0;
}
