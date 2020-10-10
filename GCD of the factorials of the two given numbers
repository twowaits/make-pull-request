// Problem to find the GCD of the factorials of the two given numbers
// The below code will surely work till the lesser of the two numbers entered is less than 17 , as finding factorial of such large numbers is really hectic in languages like C and C++ 

#include <stdio.h>
#include<iostream>
using namespace std;

int main()
 {    long int fact(int );
    unsigned long long int n1,n2,p;
    cout<<"enter the first number"<<endl;//enter the value b/w 1 to 16
    cin>>n1;
    cout<<"enter the second element"<<endl;
    cin>>n2;
    p = min(n1,n2);
    cout<<"GCD of the two numbers is"<<fact(p);
    return 0;
}

long int fact(int n) {                           // Factorial using recurssion
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}
