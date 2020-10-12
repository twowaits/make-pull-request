#include<bits/stdc++.h>

#define ll long long int
#define watch(x) cout << (#x) << " is " << (x) << endl  //watch function print variable and value for debugging
#define count_ones __builtin_popcountll                  // count_ones(9) is equal to 2 valid for ll also
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fo(i,n) for(ll i=0;i<n;i++)
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	fast_io

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int low = 0;
	int high = n - 1;
	int mid = 0;

	while (mid <= high)
	{
		switch (a[mid])
		{
		case 0:
			swap(a[low++], a[mid++]);
			break;
		case 1:
			mid++;
			break;
		case 2:
			swap(a[mid], a[high--]);
			break;
		}
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";


	return 0;
}