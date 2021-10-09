#include <bits/stdc++.h>
using namespace std;
 
int factorial(int num)
{
    if (num <= 1)
        return 1;
    int tmp = 2;
    for (int i = 3; i <= num; i++)
        tmp *= i;
    return tmp;
}
 
int gcdOfFact(int n1, int n2)
{
    return factorial(min(n1, n2));
}
 
int main()
{
    int n1 = 4, n2 = 9;
    cout << gcdOfFact(n1, n2);
    return 0;
}