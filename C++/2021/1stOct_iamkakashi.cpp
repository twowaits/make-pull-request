// Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.
// code by iamkakashi

#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;
bool isprime(ll n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    ll n;
    cin>>n;
    ll first=0,second=1,num;
    for(int i=0;i<n;i++){
        num=first+second;
        ll ans= second;
        if(isprime(ans) || ans%5==0){
            ans=0;
        }
        cout<<ans<<" ";
        first=second;
        second=num;
    }
    cout<<endl;
}