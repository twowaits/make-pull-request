/* This is a c++ program that takes a number 'n' and prints the fibonacci series upto n while replacing prime numbers and all multiples of 5 by 0.*/
#include<iostream>
using namespace std;
typedef long long ll;

//function to check if a number is prime
bool isPrime(ll n){
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;

    return true;
}

int main(){
    int n;

    //taking input number of terms to print
    cin>>n;

    ll prev = 1, curr = 1;

    //if we have to print upto less than 2 terms
    if(n==1) cout<<1;
    else if(n==2) cout<<1<<" "<<1;

    //if we have to print upto more than 2 terms
    else{

        cout<<1<<" "<<1<<" ";

        for(int i=3;i<=n;i++) {
            ll next = curr + prev;

            //if num is prime or multiple of 5
            if(isPrime(next)||!(next%5)) cout<<0<<" ";

            //if neither prime, nor multiple of 5
            else cout<<next<<" ";

            prev = curr;
            curr = next;
        }
    }
}