//============================================================================
// Name        : 1stOct_shubhamSM.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
using namespace std;
class MyClass {        // The class
  public:
	bool Prime(int sum);
};
bool MyClass::Prime(int sum)
{
	if(sum<=1)
	{
		return false;
	}
	for(int i=2;i<sum;i++)
	{
		if(sum%i==0)
			return false;
	}
	return true;
}



int main() {
	MyClass myObj;
	int q;
	cin>>q;
	int a=1,b=1;
	cout<<a<<" "<<b<<" ";
	for(int i=2;i<q;i++)
	{
		int sum=a+b;
		if(sum%5==0)
			cout<<"0 ";
		else if(myObj.Prime(sum))
		{
			cout<<"0 ";
		}
		else
			cout<<sum<<" ";

		a=b;
		b=sum;
	}

}
