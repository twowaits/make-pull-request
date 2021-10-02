#include<bits/stdc++.h>
using namespace std;

// function to check prime 
bool isPrime(int n){
	if (n <= 1){
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

void fibonacci(int n){
	int a = 1, b = 1, c, i;
	if(n == 0){
		return;
		
	}else if(n == 1){
        cout << "1 ";
       
    }
    cout << "1 1 ";
	for(i = 3; i <= n; i++){
        c = a + b;
        //Condition check
        if ( c % 5 != 0 && !isPrime(c)){
            cout << c << " ";
        }else{
            cout << "0 ";
        }
        a = b;
        b = c;
	}

}


int main()
{
	int n;
    cin >> n;
	fibonacci(n);
	return 0;
}
