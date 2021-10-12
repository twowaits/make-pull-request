#include <bits/stdc++.h>
using namespace std;
 
int fact(int x) {
    if (x < 2)
        return 1;
    int ans = 2;
    for (int i = 3; i <= x; i++)
        ans *= i;
    return ans;
}
 
int gcdOfFact(int a, int b) {
    if(a<b){
		return fact(a);
	}
	return fact(b);
}
 
int main() {
    int a = 5, b = 120;
    cout << gcdOfFact(a, b);
    return 0;
}
