#include<iostream>
using namespace std;
int GCD(int n,int m)
{
    int r;
    if(m==0) return n;
    else
    {
        r=n%m;
        GCD(m,r);
    }
}
int main()
{
    int a,b,res;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    res=GCD(a,b);
    cout<<"The requird GCD of the given two number is "<<res<<endl;
    return 0;

}
    
