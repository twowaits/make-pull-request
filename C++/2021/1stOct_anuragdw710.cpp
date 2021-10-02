#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define ss(s)   scanf("%s",s)
#define pi(x)   printf("%d\n",x)
#define pl(x)   printf("%lld\n",x)
#define ps(s)   printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pl;
typedef vector<int>     vi;
typedef vector<ll>      vl;
typedef vector<pii>     vpii;
typedef vector<pl>      vpl;
typedef vector<vi>      vvi;
typedef vector<vl>      vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}
int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(ll int u,ll int* aa);

const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================

vl g[N];
int a[N];


void solve(){
 int n;
 cin>>n;
 vector<int> fib;
int a = 1, b = 1;
fib.push_back(a);
if(n==1){
  cout<<"1 ";
  return;
}
for (int i = 1; i < n; i++) {
    fib.push_back(b);
    int c = a + b;
    a = b;
    b = c;
}
int x = fib[fib.size()-1];
bool prime[x+ 1];
memset(prime, true, sizeof(prime));
prime[0] = false;
prime[1] = false;
for (int p = 2; p * p <= x; p++)
{
if (prime[p] == true)
{
for (int i = p * p; i <= x; i += p)
prime[i] = false;
}
}

// Print all prime numbers
for(int i=0; i<fib.size(); i++){
    if(prime[fib[i]]==true || fib[i]%5==0)
        cout<<"0 ";
    else
      cout<<fib[i]<<" ";
  }

}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // ll int t = 1;
    // cin >> t;
    // while(t--) {
    //   solve();
    // }
    solve();

    return 0;
}

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void ipgraph(int n, int m){
    int i, u, v;
    while(m--){
        cin>>u>>v;
    u--, v--;
        g[u].pb(v);
        g[v].pb(u);
    }
}

void dfs(ll int u,ll int*aa){
    //col[u]=t;
    aa[u]=1;
    for(int v:g[u]){
      if(aa[v]==0){
       dfs(v,aa);
      }
    }
}