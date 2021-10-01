#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
	if(n == 2)
		return true;
    if (n <= 1 || n%2==0)
        return false;

    for (int i = 3; i <= sqrt(n); i+=2)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    long long n1 = 0, n2 = 1, curr;
    long long n;cin >> n;
    cout << 1 << " ";
    for (int i = 1; i < n; i++)
    {
        curr = n1 + n2;
        if (curr % 5 == 0 || isPrime(curr))
            cout << 0 << " ";
        else
            cout << curr << " ";
        n1 = n2;
        n2 = curr;
    }
    cout <<endl;
}
