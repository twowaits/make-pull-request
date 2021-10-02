#include<bits/stdc++.h>
using namespace std;


bool isprime(int number){
    if(number<=1){
        return false;
    }
    for(int i=2; i<sqrt(number); i++){
        if(number%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num1=0,num2=1,num3,n;
    cin>>n;
    num3=num1+num2;
    cout<<num2<<" ";
    for(int i=3; i<=n+1; i++){
        if(num3%5==0){
            cout<<"0 ";
        }
        else if(isprime(num3)){
            cout<<"0 ";
        }
        else{
            cout<<num3<<" ";
        } 
        num1=num2;
        num2=num3;
        num3=num2+num1;   
    }
}
