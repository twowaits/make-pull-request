#include <iostream>

using namespace std;

bool isPrime(int n){
	if(n == 1)
		return false;
	int fac_count = 0;
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			if(i == n/i)
				fac_count += 2;
			else
				fac_count++;
		}
	}
	return fac_count == 0;
}

class Solution{
	public:
	void twist_fibonacci(){
		int n;
		cin >> n;
		int a = 1, b = 0;
		if( n < 0 )
			return;
		for(int i = 0; i < n; i++){
			if(isPrime(a) || (a%5 == 0))
				cout<<0<<" ";
			else
				cout<<a<<" ";
			
			a = a + b;
			b = a - b;
		}
	}
};


int main(){
    Solution s;
    s.twist_fibonacci();
    
    return 0;
}


