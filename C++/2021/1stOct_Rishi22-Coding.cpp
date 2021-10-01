#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    bool res=true;
    for(int i=2;i<sqrt(n);i++)
        if(n%i==0)
            res = false;
    if(n==1)
        res = false;
    return res;
}
void fibonacci(int n)
{
    int A[3] = {1,1,2},x,i=0,c=1;
    for(x=A[0];c<=n;c++)
    {
        if(isPrime(x)||x%5==0)
            x=0;
        cout<<x<<" ";
        if(i<2)
            i++;
        else
        {
            A[0]=A[1];
            A[1]=A[2];
            A[2]=A[0]+A[1];
        }
        x=A[i];
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    fibonacci(n);
}
