/* Take input the value of 'n', upto which you will print.
-Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0. */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

#define vi vector<ll> 

bool isPrime(int n)
{
    if (n <= 1)
        return false;
  
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
 


int main(){
    ll n;
    cin >> n;
    vector<ll> f(n+1);

    f[0] = 0;
    f[1] = 1;

    for(int i = 2; i <= n; i++){
        f[i] = f[i-1] + f[i-2];
    }


    for(int i = 2; i <= n;++i){
        if(isPrime(f[i]) || f[i]%5 == 0){
            f[i] = 0;
        }
    }

    for(int i=1;i<=n;i++){
        cout<<f[i]<<" ";
    }

    return 0;


}
