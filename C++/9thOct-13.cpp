//pr from akshatrb

#include<iostream>
using namespace std;

int gcd(int, int);

int main(){
    int x, y;

    cout<<"Enter two numbers:";
    cin>>x>>y;

    cout<<"GCD("<< x <<", "<< y <<") = "<< gcd(x, y);
    return 0;
}

int gcd(int x, int y){
    int a, b, r;

    if(x > y){
        a = x;
        b = y;
    }
    else{
        a = y;
        b = x;
    }

    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}