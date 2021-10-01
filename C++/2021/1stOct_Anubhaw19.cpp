#include<bits/stdc++.h>
using namespace std;
bool checkPrime(int x)
{
if(x<=1)
return false;
else if(x<=3)
return true;
else if(x%2==0 || x%3==0)
	return false;
else{
	for (int i=5; i*i <= x; i=i+6)
        if (x%i ==0 || x%(i+2) ==0)
            return false;
}
return true;

}


int main()
{
	int n; 
	cin>>n;

	int fib[n+2];
	int i;
	fib[0]=0;
	fib[1]=1;
	 for(i = 2; i <= n; i++)
    {
       fib[i] = fib[i-1] + fib[i-2];
    }


for(int j=1;j<=n;j++)
{
	if(fib[j]%5==0 || checkPrime(fib[j]))
	{
		fib[j]=0;
	}


	cout<<fib[j]<<" ";
}


return 0;
}
