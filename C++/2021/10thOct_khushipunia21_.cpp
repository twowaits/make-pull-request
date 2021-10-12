#include <iostream>
using namespace std;
int fact(int a){
    if(a==1){
        return 1;
    }
    return a*fact(a-1);
}
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a==b){
        return a;
    }
    if(a>b){
        return gcd(a-b,b);
    }
    return gcd(a,b-a);
}
int gcdfact(int a,int b){
    int f1=fact(a);
    int f2=fact(b);
    return gcd(f1,f2);
}

int main(){
    cout<<gcdfact(5,120);
    return 0;
}