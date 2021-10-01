#include <iostream>
using namespace std;

void vbfib(int n)
{
    static int a = 1, b = 1, sum = 0;
    if (n != 0) {
        cout<<a<<" ";
        sum = a + b;
        a = b;
        b = sum;
        return vbfib(n-1);
    }
}
int main()
{
    int ip_n;
    cout<<"Enter number of terms : ";
    cin>>ip_n;
    vbfib(ip_n);
    return 0;
}
