#include<iostream>
using namespace std;
bool isPrime(int num)
{
    if(num<=1)
    {
        return false;
    }
    for(int i=2;i<num;i++)
    {
        if((num%i)==0)
        {
            return false;
        }
    }
    return true;
}
void printFibo(int total)
{
    int a = 0, b = 1;
    if (total < 1)
        return;
    for (int i = 1; i <= total; i++) 
    { 
        if((b%5==0) || isPrime(b) )
        {
            cout<<0<<" ";
        }
        else{
            cout<<b<<" ";
        }
        int c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    cin>>n;
    printFibo(n);
}