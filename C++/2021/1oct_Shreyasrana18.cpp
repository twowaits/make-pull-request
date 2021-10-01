#include <iostream>
using namespace std;
bool Prime(int n)
{
    bool s=true;
    for(int i=2;i<n/2;i++)
        if(n%i==0)
            s = false;
    if(n==1)
        s = false;
    return s;
}
void fibo(int n)
{
    int X[3] = {1,1,2},a,i=0,c=1;
    for(a=X[0];c<=n;c++)
    {
        if(Prime(a)||a%5==0)
            a=0;
        cout<<a<<" ";
        if(i<2)
            i++;
        else
        {
            X[0]=X[1];
            X[1]=X[2];
            X[2]=X[0]+X[1];
        }
        a=X[i];
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    fibo(n);
}