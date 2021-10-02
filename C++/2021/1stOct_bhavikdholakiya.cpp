/*****************************************************************************


  #Bhavik_Dholakiya




      -> Everything is Temporary, emotions, people, situation , so do not
        become so attached, Just flow With it.




      -> Everyone You Meet In Your Life Is There to Teach You Something, it
        is upto You To be The Student.
        
     
         

  #Bhavik_Dholakiya     
        
        
*****************************************************************************/
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define fast_cin() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// Sieve Of Eratosthenes

vector<ll>SieveOfEratosthenes(vector<ll>v){

    ll n = v[v.size()-1];
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for (ll p=2;p*p<=n;p++){
        if (prime[p]==true){
            for (ll i=p*p;i<= n;i+=p){
                prime[i]=false;
            }     
        }
    }

//    IF the no. is multiple of 5 or Prime than assigning it to Zero

    for(ll i=0; i<v.size(); i++){
        if(prime[v[i]]==true || v[i]%5==0){
            v[i] = 0;
        }
    }
    return v;
}

vector<ll>FbNumbers(ll n){
    vector<ll>v;
    ll F1=0,F2=1;

    if (n<1){
        return v;
    }
    for (ll i=1;i<n;i++){
        v.push_back(F2);
        ll next = F1 + F2;
        F1 = F2;
        F2 = next;
    }
    return v;
}

int main(){

    fast_cin();
    ll n;
    cin>>n;
    vector<ll>v=FbNumbers(n+1);
    v=SieveOfEratosthenes(v);
   
    for(ll i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}