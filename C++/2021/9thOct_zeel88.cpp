#include<iostream>
using namespace std;
 
int find_factorial(int x)
{
    if (x <= 1)
        return 1;
    int res = 2;
    for (int i = 3; i <= x; i++)
        res = res * i;
    return res;
}
 
int gcd_Of_factorial(int m, int n)
{
    return find_factorial(min(m, n));
}
 
int main()
{
    int i,j;
    cin>>i>>j;
    cout << gcd_Of_factorial(i, j);
    return 0;
}
