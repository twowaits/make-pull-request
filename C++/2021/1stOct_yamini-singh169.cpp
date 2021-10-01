/*
	Fibonacci Series with a Twist
	Add following functionalities to it :

	Take input the value of 'n', upto which you will print.
	-Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.
	Sample Input :
	12
	27

	Sample Output :
	1 1 0 0 0 8 0 21 34 0 0 144
	1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418
*/

#include <bits/stdc++.h>
#define FIO ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

const int n = 3e6 + 10;
set<int> primes;
bool Prime[n];

void sieve() {
	memset(Prime, true, sizeof(Prime));
	Prime[0] = Prime[1] = false;
	for (int i = 2; i < n; i++) {
		if (Prime[i]) {
			primes.insert(i);
			for (int j = i * i; j < n; j += i) {
				Prime[j] = false;
			}
		}
	}
}

int32_t main() {
	FIO
	sieve();
	int n;
	cin >> n;
	int p = 1;
	int q = 1;
	if (n == 1) {
		cout << p;
	}
	else if (n == 2) {
		cout << p << " " << q;
	}
	else {
		int sum;
		cout << p << " " << q << " ";
		for (int i = 2; i < n; i++) {
			sum = p + q;
			p = q;
			q = sum;
			if (sum % 5 == 0) {
				cout << 0 << " ";
			}
			else if (primes.find(sum) != primes.end()) {
				cout << 0 << " ";
			}
			else {
				cout << sum << " ";
			}
		}
	}
	return 0;
}