#include<bits/stdc++.h>
using namespace std;

// function to check whether a number is Prime number or not
bool isPrime(int n)
{
	// Corner case
	if (n<=1)
		return false;
	// Check from 2 to square root of n
	for (int i=2; i<=sqrt(n); i++)
		if (n%i==0)
			return false;
			
	return true;
}

// Driver code
int main()
{
	int n;
    cin>>n;
    int n1=1,n2=1, n3, i;
    //Corner case
	if(n==0)
		return 0;
    else if (n==1)
    {
        cout <<1<<' ';
        return 0;
    }
    //Starting values
    cout <<1<<' '<<1<<' ';
	for(i = 3; i <= n; i++)
	{
        n3=n1 +n2;
        //Condition check for Prime and factor of 5
        if (n3%5!=0 && !isPrime(n3))
        	cout <<n3<<' ';
        else
        	cout << "0 ";
        //Values change for next iteration 
        n1=n2;
        n2=n3;
	}
	return 0;
}
