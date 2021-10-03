/***********************Hacktober Fest 2021******************/

/*****Solution by "manishmotwani2002" ***********/

#include<iostream>
using namespace std;

bool isPrime(int n)			//function for checking prime number
{
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
   
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
}

int main()
{
	int i,n,c;
	cin>>n;			//taking input value
	
	int a=1,b=1;
	
	if(n<=0)		//invalid input condition
	return 0;
	
	else if(n==1)
    {
        cout<<1<<" ";
    }
    else if(n == 2)
    {
        cout<<1<<" "<<1<<" ";
    }
	else
	{
//		n=n-2;
		cout<<1<<" "<<1<<" ";
		for(i=3;i<=n;i++)
		{
			c=a+b;
			a=b;
			b=c;
			
			if(isPrime(c) || c%5==0)		//checking the provided condition
			cout<<"0"<<" ";
			else
			{	
				cout<<c<<" ";
			}
		}	
	}
	
	
	
}

