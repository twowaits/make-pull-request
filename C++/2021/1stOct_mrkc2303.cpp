#include<iostream>

using namespace std;

bool isPrime(int num){
    if(num == 1)
        return false;
    for(int i = 2; i*i <= number; i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

int main(){
    int num;
    cin>>num;
    long long int num1 = 1, num2 = 1, sumof2;
    while(num-- > 0){
        if(num1 % 5 == 0 || isPrime(num1))
            cout<<0<<" ";
        else
            cout<<num1<<" ";
        sumof2 = num1 + num2;
        num1 = num2;
        num2 = sumof2;
    }
    return 0;
}