#include <iostream>

using namespace std;

int primeCheck(int n)
{
	if(n<=1)
    return 0;
    for (int i=2;i<n;i++)
    {
    	if(n%i==0)
        return 1;
	}
    return 0;
}

main()
{
	int first=1,second=1,third,n;
	cout<<"Enter Number of terms\n";
	cin>>n;
	cout<<first<<" "<<second<<" ";
	for(int i=2;i<n;i++)
	{
		third=first+second;
		if(third%5==0)
		cout<<0<<" ";
		else if(primeCheck(third)==0)
		cout<<0<<" ";
		else
		cout<<third<<" ";
		first=second;
		second=third;
	}
}
