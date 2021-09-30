#include <bits/stdc++.h>
using namespace std;

int isprime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i<=sqrt(num); i++){
            if (num % i == 0){
                return false;
            }
    }
    return true;
}

 
int main ()
{
    int n;
    int n1=1,n2 =1;
    int count =0;
    cout<<"Enter the n value: ";
    cin>>n;
    if (n == 1){
        cout<<"Fibonacci sequence upto"<< n<< ":";
        cout<<n1<<endl;
    }

    else{
        cout<<"Fibonacci sequence: ";
        while (count < n){
            if(!isprime(n1) && (n1%5!=0)){
                cout<<n1<<" ";
            }
            else{
            cout<<0<<" ";
            }
            int next = n1 + n2;
            n1 = n2;
            n2 = next;
            count ++;
        }
    }
    return 0;
}