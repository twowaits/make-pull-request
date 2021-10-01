//C++ program 
//Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.

#include<iostream>
using namespace std;

//isPrime Function
int isPrime(long long int x){
    long long int i,c=0;
    for(i=2;i<=(x/2);i++){
        if(x%i==0){
            c=1;
            break;
        }
    }

    if(c==0){
        return 1;
    }
    else if(c==1){
        return 0;
    }
}

int main(){
    long long int n,k1=1,k2=1,i,next=0;
    
    //Takes input n from the user
    cin>>n;

    for(i=1;i<=n;i++){
        if(i==1){
            cout<<k1<<" ";
            continue;
        }
        if(i==2){
            cout<<k2<<" ";
            continue;
        }
        next=k1+k2;
        k1=k2;
        k2=next;

        if((isPrime(next)==1)||((next%5)==0)){
            cout<<0<<" ";
        }
        else{
        cout<<next<<" ";
        }
    }
    return 0;
}