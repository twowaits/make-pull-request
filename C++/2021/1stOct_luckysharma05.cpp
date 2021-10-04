#include <bits/stdc++.h>  
using namespace std; 

bool check(int num){
    if(num%5==0) return true;
    for(int i=2; i<=sqrt(num); i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main() {  
    int n1=1,n2=1,n3,i,number;  
    cin>>number;    
    cout<<n1<<" "<<n2<<" "; //printing 1 and 1    
    for(i=2;i<number;++i) //loop starts from 2 because 1 and 1 are already printed    
    {    
        n3=n1+n2;    
        if(check(n3)){
            cout<<0<<" ";
        }
        else{
            cout<<n3<<" ";
        }    
        n1=n2;    
        n2=n3;    
    }    
    return 0;  
}  