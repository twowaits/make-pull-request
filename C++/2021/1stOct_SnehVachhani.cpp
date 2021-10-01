#include <iostream>  
using namespace std;  
bool isprime(int n)
{
	if(n==1)
	return false;
	int count=0;
	if(n==2)
	return true;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==1)
	return true;
	else
	return false;
}
int main() {  
  int n1=0,n2=1,n3,i,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 cout<<n2<<" ";  
 for(i=2;i<number+1;++i) 
 {    
  n3=n1+n2;  
  if(n3%5==0)  
  cout<<0<<" ";
  else if(isprime(n3))
  cout<<0<<" ";
  else
  cout<<n3<<" ";    
  n1=n2;    
  n2=n3;    
 }    
   return 0;  
   }
