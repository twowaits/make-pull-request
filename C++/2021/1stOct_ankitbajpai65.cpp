#include <iostream>
bool isPrime(int x);
using namespace std;

int main()
{
    int a=1,b=1,c,n;
    cout<<"Enter a no:";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
        c=a+b;
        if((c%5==0) || isPrime(c))
          cout<<"0"<<" ";
        else
          cout<<c<<" ";
        a=b;
        b=c;
    }
}
bool isPrime(int x){
    if(x==2 || x==3){
        return true;
    }
    for(int i=2;i<x/2;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

