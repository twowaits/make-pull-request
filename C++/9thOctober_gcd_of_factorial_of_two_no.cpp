// C++ program to find GCD of factorial of two
// numbers.
//The efficient solution is based on the fact that GCD of two factorials is equal to smaller factorial.
#include <iostream>
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

int check(int m, int n)
{
    return fact(min(m, n));
}

int main()
{
    int x,y;
    cin >> x >> y;
    cout << check(x, y) << endl;
    return 0;
}
