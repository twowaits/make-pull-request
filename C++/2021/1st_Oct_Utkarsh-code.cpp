// program to print Fibonacci Series with a Twist

#include<bits/stdc++.h>
using namespace std;
#define  int long long 

bool isprime(int num){
    
    if(num==1) return false;
    for(int i=2; i*i<=num; i++){
        if(num%i==0) return false;
    }
    return true;
}

signed main(){
    

    int total_number_of_N;
    cout<<"Enter the total number of N you want to print the series: ";
    cin>>total_number_of_N;

    while(total_number_of_N--){

        int n;
        cin>>n;
        
        int fibonacci_with_twist[n+1];
        fibonacci_with_twist[0]=0;
        fibonacci_with_twist[1]=1;

        for(int num=2; num<n+1; num++){

            fibonacci_with_twist[num]=fibonacci_with_twist[num-1]+fibonacci_with_twist[num-2];
            
        }

        for(int idx=1; idx<n+1; idx++){
            int value=fibonacci_with_twist[idx];
            
            if(value%5==0 || isprime(value)) fibonacci_with_twist[idx]=0;
            cout<<fibonacci_with_twist[idx]<<" ";
        }
        cout<<"\n";

    }
}