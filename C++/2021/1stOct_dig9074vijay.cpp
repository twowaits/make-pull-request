//Twisted Fibonacci
#include <iostream>
#include <math.h>

using namespace std;

//Function to check if a number is Prime
bool isPrime(int p)
{
    bool t =true;
    if(p==2 || p==3)
    t=true;
    else if(p==1)
    t=false;
    else
    for(int i = 2; i < sqrt(p) ; i++)
    {
        if(p%i==0){
            t = false;
            break;
        }
    }
    return t;
}

int main()
{
    long long int n, f1=0, f2=1,a,b,c;
    cin>>n; 
    cout<<f2<<' ';
    for(int i=0;i<n-1;i++)
    {
        c = f2 + f1;
        if(isPrime(c) || c%5==0) //Checking if a number is Prime or a multiple of 5
        {
            cout<<0<<" ";
        }
        else  //Else print the sequence
        cout<<c<<' ';
        f1 = f2;
        f2 = c;
    }

    return 0;
}
