#include<iostream>
using namespace std;
int fact(int n)
{
    if(n>1)
    return n*fact(n-1);
    else
    return 1;
}
int gcd(int a, int b)
{
    if (a == 0)
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
{   int a,b;
    cin>>a>>b;
    a=fact(a);b=fact(b);
    cout<<gcd(a,b);

}