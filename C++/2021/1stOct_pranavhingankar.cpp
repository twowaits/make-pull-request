


#include<iostream>

using namespace std;

bool Prime(int n){
    if(n == 1)
        return false;
    for(int divisor = 2;divisor*divisor <= n;divisor++){
        if(n%divisor == 0)
            return false;
    }
    return true;
}

int main(){
    int nt;
    cin>>nt;
    long int n1 = 1,n2 = 1,s2;
    while(nt-- > 0){
        if(n1%5 == 0 || Prime(n1))
            cout<<0<<" ";
    else
            cout<<n1<<" ";
    s2 = n1 + n2;
    n1 = n2;
   n2 = s2;
    }
    return 0;
} 
