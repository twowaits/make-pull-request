#include <bits/stdc++.h>
using namespace std;
#define ll long long
int is_prime(ll n)
{
	if(n==1)
	return 0;
	int count=0;
	if(n==2)
	return 1;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==1)
	return 1;
	else
	return 0;
}
int main()
{
   ll n,i=0;
   scanf("%lld",&n);
   ll n1=1,n2=0,update;
   while(i<n)
   {
      if(!is_prime(n1)&&((n1)%5!=0))
      {
         printf(" %lld",n1);
      }
      else if(is_prime(n1)||(n1)%5==0){
         printf(" 0");
      }
      update=n1+n2;
      n2=n1;
      n1=update;
      i=i+1;
   }
   return 0;
}