#include<iostream>
using namespace std;
bool checkPrimeNumber(int x) {

    if (x <= 1)
        return false;

    for (int i = 2; i < x; i++)
        if (x % i == 0)
            return false;

    return true;
}

int printFibonacci(int x){
	int a = 1, b = 1, c;

	if( x == 0)
		return 0;

    else if ( x == 1 ){
        cout << "1 ";
        return 0;
    }

    cout <<a<<" "<<b<<" ";
	for(int i = 3; i <= x; i++){
        c = a + b;
        if ( (c % 5 != 0) && !checkPrimeNumber( c ))
        cout <<c<<" ";
        else
        cout <<"0 ";
        a = b;
        b = c;
	}
	return b;
}

int main(){
    int x;
    cout << " Enter the value of n : ";
    cin >> x;
	printFibonacci(x);
    cout<<"\n";
    return 0;
} 
