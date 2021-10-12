#include<iostream>

using namespace std;

bool isPrime(int number){
    if(number == 1)
        return false;
    for(int divisor = 2;divisor*divisor <= number;divisor++){
        if(number%divisor == 0)
            return false;
    }
    return true;
}

int main(){
    int number_of_terms;
    cin>>number_of_terms;
    long long int number1 = 1,number2 = 1,sumof2;
    while(number_of_terms-- > 0){
        if(number1%5 == 0 || isPrime(number1))
            cout<<0<<" ";
        else
            cout<<number1<<" ";
        sumof2 = number1 + number2;
        number1 = number2;
        number2 = sumof2;
    }
    return 0;
}