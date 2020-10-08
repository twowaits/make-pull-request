#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n-1;i++)
   {
	   for(int j=-(n-1);j<=(n-1);j++)
	   {
		   if(i==-j ||i==j)              //printing according to condition for hollow
		   cout<<"*";
		   else
		   cout<<" ";
	   }
	   cout<<'\n';
   }
	   for(int i=0;i<2*n;i++)                  //printing last row
	   {
		   if(i%2==0)
		   cout<<"*";
		   else
		   cout<<" ";
	   }
}