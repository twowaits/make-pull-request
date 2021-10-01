#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int num1=1,num2=1,num3,i,number;
    cin>>number;
    num3=num1+num2;
    cout<<num1<<" "<<num2<<" ";

    for(i=2;i<number;++i){

        if(isPrime(num3) == true){
        cout<<0<<" ";
        }

        else if(num3%5==0){
         cout<<0<<" ";
        }

        else{
            cout<<num3<<" ";
        }

        num1=num2;
        num2=num3;
        num3=num2+num1;
    }
    return 0;
}
