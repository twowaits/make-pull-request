// code for Fibonacci Series By Nikhil Kumar Kataria

#include<iostream>
using namespace std;

// Function for checking prime number
bool Prime(int n){
    if (n == 1) {
        return false;
    }

    int i = 2;
    while (i*i <= n) {
        
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}
void Fibonacci(int n){
    int a = 1;
    int b = 1;
    int c;
    cout<<a<<" "<<b<<" ";
    while(n-2>0){
        c = a+b;
        a = b;
        b = c;
        if(Prime(c) || c%5==0){
            c = 0;
        }
        cout<<c<<" ";
        n--;
    }
}// main
int main(){
    int n; cin>>n;
    Fibonacci(n);
    return 0;
}
