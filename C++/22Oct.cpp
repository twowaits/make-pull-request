#include <bits/stdc++.h>
using namespace std;


bool shouldSwap(char chars[], int start, int curr)
{
	for (int i = start; i < curr; i++) 
		if (chars[i] == chars[curr])
			return 0;
	return 1;
}


void findPermutations(char chars[], int index, int n)
{
	if (index >= n) {
		cout << chars <<" ";
		return;
	}

	for (int i = index; i < n; i++) {

		
		bool check = shouldSwap(chars, index, i);
		if (check) {
			swap(chars[index], chars[i]);
			findPermutations(chars, index + 1, n);
			swap(chars[index], chars[i]);
		}
	}
}


int main()
{
	char chars[1000];
  	cin>> chars;
	int n = strlen(chars);
	findPermutations(chars, 0, n);
	return 0;
}
