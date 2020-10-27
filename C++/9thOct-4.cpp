#include <iostream>
using namespace std;
int fact(int a)
{
	if(a==1)
	return 1;
	return fact(a-1)*a;
}
int hcf(int k,int l)
{
	while(k!=l)
	{
	if(k>l)
	return hcf(k-l,l);
	else
	return hcf(k,l-k);
	}
	return k;
}

int main()
{
  int a,b;
  cin>>a>>b;
  int k=fact(a);
  int l=fact(b);
  cout<<"HCF of factorial of numbers  --- "<<hcf(k,l);
}