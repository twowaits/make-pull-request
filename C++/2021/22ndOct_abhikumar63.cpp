#include <bits/stdc++.h>
using namespace std;
 
int factorial(int x)
{
    if (x <= 1)
        return 1;
    int res = 2;
    for (int i = 3; i <= x; i++)
        res = res * i;
    return res;
}
 
int gcdOfFactorial(int m, int n)
{
    return factorial(min(m, n));
}
 
int main()
{
    int a,b;
    cin>>a>>b;
    cout << gcdOfFactorial(a, b);
    return 0;
}
