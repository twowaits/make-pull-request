#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    bool ans = true;
    if(n==0 || n==1)
    {
        ans = false;
    }
    else
    {
        for(int i=2 ; i<n ; i++)
        {
            if(n%i==0)
            {
                ans = false;
                break;
            }
        }
    }
    return ans;
}

int main()
{
    int n, n1=0, n2=1, n3=0;
    cout<<"Enter the number of elemets: ";
    cin>>n;

    if(n==1)
        cout<<"1";
    cout<<"1 ";
    for(int i=1 ; i<n ; ++i)
    {
        n3=n1+n2; 
        n1=n2; 
        n2=n3;
        if(isPrime(n3) || n3%5==0)
            cout<<"0 ";
        else
            cout<<n3<<" ";
    }
}
