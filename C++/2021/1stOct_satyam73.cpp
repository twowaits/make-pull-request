#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//declaring the functions
void series();
bool isPrime(int);

//defining the prime function
bool isPrime(int n)
{

    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

//defining the series function
void series(){
    int n,first,sec,next;
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<"Fibonacci series is :"<<endl;
    first = 1;
    sec = 1;
    for(int i=0; i<n; i++){
    first = sec;
    sec = next;
    next = first + sec;
    if((isPrime(next)||(next%5==0))){
        cout<<0<<" ";
    }else{
    cout<<next<<" ";
    }
    }
    }
int main(){
    series();
    getch();
    return 0;
}
