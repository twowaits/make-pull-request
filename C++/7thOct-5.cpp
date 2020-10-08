#include <iostream>
using namespace std;
#define ll long long int

string denominations(ll num){
    string res="";
	string val, sub;
    if(num/10000000 != 0){
		val = to_string(num/10000000);
		if(num/10000000 == 1)
			sub = " crore ";
		else
			sub = " crores ";
        res = res + val + sub;
        num = num %10000000;
    }
    if(num/100000 != 0){
		val = to_string(num/100000);
		if(num/100000 == 1)
			sub = " lac ";
		else
			sub = " lacs ";
        res = res + val + sub;
        num = num %100000;
    }
    if(num/1000 != 0){
		val = to_string(num/1000);
		if(num/1000 == 1)
			sub = " thousand ";
		else
			sub = " thousands ";
        res = res + val + sub;
        num = num %1000;
    }
    if(num/100 != 0){
		val = to_string(num/100);
		if(num/100 == 1)
			sub = " hundred ";
		else
			sub = " hundreds ";
        res = res + val + sub;
        num = num %100;
    }
    if(num/10){
		val = to_string(num/10);
		if(num/10 == 1)
			sub = " ten and ";
		else
			sub = " tens and ";
        res = res + val + sub;
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