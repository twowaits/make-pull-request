
/***
-----------------------------------------------------------------------------------------------------------------------------------------
DESCRIPTION: THIS IS A PROGRAM Program to print the Fibonacci Series up to n while replacing prime numbers, all multiples of 5 by 0.
-----------------------------------------------------------------------------------------------------------------------------------------
***/

#include <iostream>

using namespace std;

int main()
{
    int n, sum, a = 1, b = 1, marker;
    cout<<"Enter the limit:";
    cin>>n;
    cout<<a; 
    cout<<",";
    cout<<b;
    cout<<",";
    for (int i = 2; i < n; i++) {
    marker = 0;
    sum = a+b;
    if (sum %5 ==0)
        cout<<"0 ";
    else {
            for (int j = 2; j < sum /2; j++) 
                {
                 if (sum % j == 0)
                   {
                    cout<<sum<<" ";
                    marker = 1;
                    break;
                    }
                }
         if (marker == 0)
            cout<<"0 "; }
            a = b;
            b = sum;
        }
    

    return 0;
}
