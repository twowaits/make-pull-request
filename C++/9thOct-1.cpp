#include<iostream>
using namespace std;
int factorial(int n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    if(a<b)
    {
        cout<<factorial(a);
    }
    else
    {

        cout<<factorial(b);
    }
    return 0;
}

