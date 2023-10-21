#include<bits/stdc++.h>
#define ps(x, y) fixed << setprecision(y) << x
#define BOOST  ios_base::sync_with_stdio(false);    cin.tie(NULL);
#define vi  vector<int>
#define pb push_back
#define pob pop_back
#define f first
#define s second
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define rall(v) v.rbegin(), v.rend()
#define next next_permutation
#define perv prev_permutation
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define setbit(x) __builtin_popcount(x)
#define w(t) while (t--)
#define pq priority_queue

#define FOR(i,a,b) for ( i = (a); i < (b); ++i)
#define FORN(i,a) FOR(i,0,a)
#define ROF(i,a,b) for ( i = (b)-1; i >= (a); --i)
#define ROFN(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)

using namespace std;
#define int long long

int mod = 1000000007;
const int N = 1e5;

int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("outputt.txt", "w", stdout);
#endif

	int n; cin >> n;

	bool primes[N + 1];
	memset(primes, true, N + 1);
	primes[0] = false; primes[1] = false;


	for (int i = 2; i * i <= N; i++) {   
		if (primes[i]) {
			for (int j = i * i; j <= N; j += i)
				primes[j] = false;
		}
	}

	int fib[n + 1];
	fib[0] = 0;  fib[1] = 1;

	for (int i = 2; i <= n; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];

	}

	for (int i = 1; i <= n; i++) {
		if (primes[fib[i]] || fib[i] % 5 == 0) cout << "0 ";
		else cout << fib[i] << " ";
	}

	cout << endl;
	return 0;
}
