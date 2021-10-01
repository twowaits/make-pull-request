#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *aptr=&a;

    cout<<*aptr<<\n;
    *aptr=20;
    cout<<a<<\n;
    return 0;
}