/* Program to Print Fibonacci Series with a twist

Input :
    Number of Testcases
        Each Testcase contains a number n which is the length of sequence needed to print
Output :
    Print the fibonacci sequence
        If number in fibonacci sequence is Prime or is Divisible by 5 print "0"
 */

/* Note :
    Uncomment cout lines(One in testcase and one in solve()) if you are stuck
*/

#include<bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pll;
typedef vector<ll>vl;
typedef vector<int>vi;
typedef priority_queue<ll,vl,greater<ll>()> pq_ll_min;
typedef priority_queue<ll> pq_ll_max; 
typedef stack<ll> s;
typedef queue<ll> q;


#define pi 3.141592653589793
#define PI  acos(-1.0)
#define space " "
#define endl '\n'
#define F first
#define S second
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)

#define FAST {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define testcase ll t;/* cout<<"Enter number of testcases:"; */cin>>t;while(t--)
#define dbxstl(x){for(auto ele:x)cout<<ele<<space; cout<<endl;}
#define dbxval(x){cout<<x<<endl;}

const ll INF = 1e18+7;
const ll MOD=1e9+7;

bool isPrime(ll n);
bool isDivisibleByFive(ll n);
void printFibonacciSeriesWithTwist(ll n);



bool isPrime(ll n){
    
    if(n==2)return true;

    for(ll i=2;i<=n/2;i++){
        if(n%i==0)return false;
    }
    return true;
}

bool isDivisibleByFive(ll n){

    if(n%5==0)return true;
    return false;
}

void printFibonacciSeriesWithTwist(ll n){

    if(n<=0){
        // cout<<"Length cannot be 0";
        return;
    }

    if(n==1){
        cout<<"1";
        return;
    }

    if(n==2){
        cout<<"1 1";
        return;
    }

    cout<<"1 1 ";
    ll first=1;
    ll second=1;
    for(ll i=2;i<n;i++){
        ll numberToPrint = first+second;
        if(isPrime(numberToPrint) || isDivisibleByFive(numberToPrint)){
            cout<<"0"<<" ";
        }
        else{
            cout<<numberToPrint<<" ";
        }
        first=second;
        second=numberToPrint;
    }
    cout<<'\n';
}

void solve(){

    ll n;
    // cout<<"Enter the Value of n:";
    cin>>n;
    printFibonacciSeriesWithTwist(n);
}

int main(int argc, char const *argv[])
{
    testcase{
        solve();
    }
    return 0;
}

