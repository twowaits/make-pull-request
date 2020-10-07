#include <iostream>
using namespace std;
#define ll long long int

string denominations(ll num){
    string res="";
    if(num/10000000 != 0){
        res = res + to_string(num/10000000) + " crores ";
        num = num %10000000;
    }
    if(num/100000 != 0){
        res = res + to_string(num/100000) + " lacs ";
        num = num %100000;
    }
    if(num/1000 != 0){
        res = res + to_string(num/1000) + " thousands ";
        num = num %1000;
    }
    if(num/100 != 0){
        res = res + to_string(num/100) + " hundreds ";
        num = num %100;
    }
    if(num/10){
        res = res + to_string(num/10) + " tens and ";
        num = num %10;
    }
    res = res + to_string(num);
    return res ;    
}

int main() {
    ll num;
    cin>>num;
    cout<<denominations(num)<<endl;
}
