//Fibonacci series with a twist in C++

#include<iostream>
using namespace std;

//Function to check if a number is prime or not
bool checkPrimeNumber(int x) {

    // Corner case: 0 & 1 are not prime numbers
    if (x <= 1)
        return false;
  
    // Check from 2 to x-1
    for (int i = 2; i < x; i++)
        if (x % i == 0)
            return false;
  
    return true;
}

//Function to print fibonnaci series
int printFibonacci(int x){
	int a = 1, b = 1, c;

    //Corner case: number of elements is 0
	if( x == 0)
		return 0;

    //Corner case: number of elements is 1
    else if ( x == 1 ){
        cout << "1 ";
        return 0;
    }

    //initial values
    cout <<a<<" "<<b<<" ";
	for(int i = 3; i <= x; i++){
        c = a + b;
        //Condition check for twist
        if ( (c % 5 != 0) && !checkPrimeNumber( c ))
        cout <<c<<" ";
        else
        cout <<"0 ";
        //updating values for next iteration
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