#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//bool function to check prime number
bool isPrime(int n){
	  if (n <= 1)  //checking for negative Condition
		  return false;

	// Checking from 2 to square root of n
	  for (int i = 2; i <= sqrt(n); i++){
      if (n % i == 0)  //number is not prime
			  return false;
    }

	return true;
}

int fibonacci(int n)
{
	int p = 1, q = 1, r, i;

	if( n == 0)
		return 0;
    else if ( n == 1 ){
        cout << "1 ";
        return 0;
  }
  //Starting values
  cout << "1 1 ";
	for(i = 3; i <= n; i++)
	{
        r = p + q;
        //Condition check
        if ( r % 5 != 0 && !isPrime( r ))
          cout << r << " ";
        else
          cout << "0 ";
        //Values change for ext iteration 
        p = q;
        q = r;
	}
	return q;
}


int main()
{
	int n = 0;
	cout << " Please enter the value of n : ";
    cin >> n;
	fibonacci(n);
	return 0;
} 
