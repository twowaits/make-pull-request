#include<iostream>
#include<vector>
using namespace std;

#define ll long long

// function to generate first n fibonacci numbers
vector<ll> generate_fib(int n){
    vector<ll> f;
    if(n==0) return f;

    f.push_back(1); if(n==1) return f;
    f.push_back(1); if(n==2) return f;

    for(ll i=2;i<n;i++){
        f.push_back(f[i-1] + f[i-2]);
    }
    return f;
}

// function to replace primes and multiples of 5 by 0
void filter(vector<ll> &f){
    ll mx = f[f.size()-1];

    vector<bool> isPrime(mx+1, true);

    isPrime[0] = isPrime[1] = false;
    for(ll i=2;i<=mx;i++){
        if(!isPrime[i]) continue;
        for(ll j = i*i;j<=mx;j+=i){
            isPrime[j] = false;
        }
    }

    for(ll i=0;i<f.size();i++){
        if(isPrime[f[i]] || f[i]%5==0){
            f[i] = 0;
        }
    }
}

int main(){
    // taking user input
    int n; cin>>n;

    // generating first n fibonacci numbers
    vector<ll> fibs = generate_fib(n);

    // replacing primes and multiples of 5 by 0
    filter(fibs);

    for(ll i=0;i<n;i++){
        cout<<fibs[i]<<" ";
    }
}
