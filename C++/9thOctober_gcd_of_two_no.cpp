// C++ program to find GCD of two numbers
#include <bits/stdc++.h>
using namespace std;
// Recursive function to return g.c.d. of a and b
//(Euclid's algorithm)
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

int main()
{
    int a,b;
    cout << "enter the numbers whose g.c.d. is to be calculated...\n";
    cin >> a >> b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
    return 0;
}
