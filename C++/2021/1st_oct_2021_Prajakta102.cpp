
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
   
    if (n <= 1)
        return false;
  
    
    for (int i = 2; i <n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
void printFibonacciNumbers(int n)
{
	int f1 = 0, f2 = 1, i;
     vector<int>v;
	if (n < 1)
		return;
	v.push_back(f1);
	for (i = 1; i <=n; i++) {
		 v.push_back(f2);
		int next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
    for(int i=0;i<v.size();i++)
    {
        if(isPrime(v[i]))
        {
            cout<<0<<" ";
        }
        else if(v[i]%5==0)
        {
        cout<<0<<" ";
        }
        else
        {
        cout<<v[i]<<" ";
        }
    }
}

int main()
{
	printFibonacciNumbers(12);
	return 0;
}
