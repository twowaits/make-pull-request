#include <iostream>
using namespace std;
int GCD(int num1, int num2)
{
    if (num1 == 0)
    {
        return num2;
    }

    if (num2 == 0)
    {
        return num1;
    }

    if (num1 == num2)
    {
        return num1;
    }

    if (num1 > num2)
    {
        return GCD(num1 - num2, num2);
    }

    return GCD(num1, num2 - num1);
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    int a, b;
    cin >> a >> b;
    int numfact1 = fact(a);
    int numfact2 = fact(b);
    int GCDnum = GCD(numfact1, numfact2);
    cout << GCDnum;

    return 0;
}