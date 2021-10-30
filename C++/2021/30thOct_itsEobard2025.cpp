// CPP program to find GCD of factorial of two numbers by Atharva Pise
#include <iostream>                 //including standard libraries into the program
#include <stdio.h>
using namespace std;

int factorial(long int x)               //function to calculate factorial of the small number
{
	if (x <= 1)
		return 1;
	int res = 2;
	for (int i = 3; i <= x; i++)
		res = res * i;
	return res;
}

int gcdOfFactorial(long int m, long int n)              //finding small number out of the two numbers entered
{   if(m<n){
return factorial(m);}                                               //function call for factorial of number
    else 
        return factorial(n);
}

int main()
{
	long int m , n; 
    cout<<" Enter the value of first number : ";                    
    cin>>m;
    cout<<" Enter the value of the second number : ";   
    cin>>n;                                                                                                                                         // taking in two input variables from the User
	cout << "Here is the GCD of " << m << "! and " << n <<"! : "<< gcdOfFactorial(m, n);           //  function call for GCD 
    cout<<endl;
	return 0;
}

