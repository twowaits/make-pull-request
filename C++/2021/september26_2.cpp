#include<iostream>
using namespace std;
int printfactorial(int n)
{
	if (n == 0)
        return 0;
    else
        return (n % 2 + 10 *
                printfactorial(n / 2));
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<n;i++)
	{
	cout<<	printfactorial(i)<<",";
	}
	return 0;
}
