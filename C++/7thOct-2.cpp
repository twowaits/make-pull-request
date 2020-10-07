#include <iostream>
#include<string>
using namespace std;
string inwords(long n){
    string res="";
    
    if(n/10000000){
        res+=to_string(n/10000000)+" crores ";
        n=n%10000000;
    }    
    if(n/100000){
    res+=to_string(n/100000)+" lacs ";
    n=n%100000;
        
    }
    if(n/1000){
        res+=to_string(n/1000)+" thousands ";
        n=n%1000;
    }
    if(n/100){
        res+=to_string(n/100)+" hundreds ";
        n=n%100;
    }
    if(n/10){
        res+=to_string(n/10)+" tens and ";
        n=n%10;
    }
    
    res+=to_string(n);
    
    return res;
}

int main()
{   long n;
    cin>>n;
    cout<<inwords(n);
    return 0;
}
