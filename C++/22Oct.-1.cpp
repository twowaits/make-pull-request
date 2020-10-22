#include<iostream>
int sumsq(int);
using namespace std;
int main()
{
    int n;
    cin>>n;
    int n1;
    n1=n;
    while(!(n>=1 && n<=9))
    {
        n=sumsq(n);
        

    }
    if(n==1)
    cout<<n1<<" is a happy number";
    else
    {
        cout<<n1<<" is not a happy number";
    }
    
}
int sumsq(int n)
{
    int d,sum=0;
    while(n>0)
    {
        d=n%10;
        sum+=d*d;
        n=(int)n/10;


    }
    return sum;

}
