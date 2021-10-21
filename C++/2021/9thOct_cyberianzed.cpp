//GCD of Factorials

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n <= 1)
        return 1;
    int ans = 2;
    for (int i = 3; i <= n; i++)
        ans = ans * i;
    return ans;
}

int checkmin(int m, int n)
{
    return fact(min(m, n));
}

int main()
{
    int x, y;
    cout << "Enter the values of x and y: ";
    cin >> x >> y;
    cout << "The GCD of factorials is: " << checkmin(x, y) << endl;
    return 0;
}