// the following is the solution for the question :- fibonacci series with a twist

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n==1)
    return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int fibonacci(int n){
    if(n==1)
    return 1;
    if(n==2) 
    return 1;
    
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    if(fibonacci(i)%5==0){
        cout<<0<<" ";
    }
    else if(isPrime(fibonacci(i))){
        cout<<0<<" ";
    }
    else
    cout<<fibonacci(i)<<" ";
    }
    cout<<endl;

}

// author - satvik maheshwari 
// username - sarcasvik