//Submission for Hacktober Fest 2021

/*
Question: Fibonacci Series with a Twist
Submitted by:- nehamotwani80
Language Used:- C++
*/

#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n)			
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
	int i,num,c;
	cin>>num;			
	
	int a=1,b=1;
	
	if(num<=0)
	return 0;
	
	else if(num==1)
    {
        cout<<1<<" ";
    }
    else if(num==2)
    {
        cout<<1<<" "<<1<<" ";
    }
	else
	{
		cout<<1<<" "<<1<<" ";
		for(i=3;i<=num;i++)
		{
			c=a+b;
			a=b;
			b=c;
			
			if(checkPrime(c) || c%5==0)		
			cout<<"0"<<" ";
			else
			{	
				cout<<c<<" ";
			}
		}	
	}	
}
