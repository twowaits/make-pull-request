#include <stdio.h>
int factorial(int n)
{
    int f = 1;
    int i;
    for (i = 2; i <= n; i++)
        f *= i;
    return f;
}
int gcd(int a, int b)
{    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
    int a = 5, b = 120;
    printf("%d",factorial(gcd(a, b)));
    return 0;
}
