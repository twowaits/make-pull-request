#include<bits/stdc++.h>


using namespace std;


int mod = 1000000007;
const int N = 1e5;

int32_t main() {



	int n; cin >> n;

	bool seive[N + 1];
	memset(seive, true, N + 1);
	seive[0] = false; seive[1] = false;


	for (int i = 2; i * i <= N; i++) {   
		if (seive[i]==true) {
			for (int j = i * i; j <= N; j += i)
				seive[j] = false;
		}
	}

	int fibonacci[n + 1];
	fibonacci[0] = 0;  fibonacci[1] = 1;

	for (int i = 2; i <= n; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

	}

	for (int i = 1; i <= n; i++) {
		if (seive[fibonacci[i]]==true || fibonacci[i] % 5 == 0) cout << "0 ";
		else cout << fibonacci[i] << " ";
	}

	cout << endl;
	return 0;
}
